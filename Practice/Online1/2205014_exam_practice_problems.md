# Symbol Table Lab — Exam Practice Problems

Your `2205014` submission is a Symbol Table built as a linked list of hash-table "scope tables" (SDBM hashing, chaining, one table per active scope). An onsite BUET-style lab exam on this assignment almost always works the same way: you get a short spec for **one new operation**, and you bolt it onto your already-working code in 30–45 minutes.

Below are 6 practice problems built in exactly that shape. A note on their provenance: **I don't have access to BUET's actual exam bank, so these are not leaked real questions** — I designed them myself to exercise the same mechanics a real question would (scope-chain traversal, hashing/rehashing, insert/delete/print internals). To make sure they're trustworthy practice material, I implemented a reference version of each one against your actual files, compiled it, ran it (including under AddressSanitizer, since your build script uses `-fsanitize=address`), and copied the **exact verified output** below — nothing here is hand-typed or guessed.

**How to drill:** copy your working files into a scratch folder, set a 40-minute timer, implement one feature from scratch (no peeking at the hint until you're stuck), run it against the sample input, and `diff` your output against the sample output. Difficulty is roughly increasing from Problem 1 to Problem 6.

A tip that applies to *every* problem below: whatever new command letter you add, remember to (a) add it to the whitelist check at the top of the loop (`cmd == "I" || cmd == "L" || ...`), and (b) give it the same "Number of parameters mismatch for the command X" validation style as the existing commands, using the same `stream >> key` / trailing-token pattern already in your code.

---
## Problem 1 — Symbol Count (`N`) · *Easy*

**New command:** `N` — takes **no** arguments (same convention as `S`/`E`).

**Task:** Print how many symbols live directly in the current (innermost) ScopeTable, and how many symbols are visible in total if you walk outward from the current scope to the root (sum over every ScopeTable in the chain).

**Exact output**, two lines, only when `N` has zero arguments:
```
	Current ScopeTable# <U> contains <K> symbol(s)
	Total visible symbols (including outer scopes): <T>
```

**Argument mismatch:** if a token follows `N`, print `Number of parameters mismatch for the command N` (tab-prefixed, same as every other command) and skip.

**Hint:** write a `countEntries()` on `ScopeTable` that walks all buckets and chains; then have `SymbolTable` walk `getParent()` the same way `printAllScopes()` already does, accumulating counts instead of printing.

**Sample Input**
```
4
I a VAR
I b VAR
N x
N
S
I c VAR
N
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I a VAR
	Inserted in ScopeTable# 1 at position 2, 1
Cmd 2: I b VAR
	Inserted in ScopeTable# 1 at position 3, 1
Cmd 3: N x
	Number of parameters mismatch for the command N
Cmd 4: N
	Current ScopeTable# 1 contains 2 symbol(s)
	Total visible symbols (including outer scopes): 2
Cmd 5: S
	ScopeTable# 2 created
Cmd 6: I c VAR
	Inserted in ScopeTable# 2 at position 4, 1
Cmd 7: N
	Current ScopeTable# 2 contains 1 symbol(s)
	Total visible symbols (including outer scopes): 3
Cmd 8: Q
	ScopeTable# 2 removed
	ScopeTable# 1 removed
```

---
## Problem 2 — Shadow Warning on `I` · *Easy–Medium*

**Modifies:** the existing `I` command (no new command letter).

**Task:** Whenever `I` successfully inserts a symbol into the *current* scope, additionally check whether a symbol of the same name already exists in any **ancestor** scope (parent, grandparent, ... up to root — NOT the current scope itself). If so, print one extra line right after the normal `Inserted...` line, naming the **nearest** ancestor that already declares it:
```
	Warning: '<key>' shadows a declaration in ScopeTable# <U>
```
If the insertion into the current scope fails (name already exists *there*), behave exactly as before — only the existing `'<key>' already exists in the current ScopeTable` line, no shadow check at all.

**Hint:** you need a lookup that starts at `current->getParent()` (skip the current table) and walks upward — almost identical to `SymbolTable::lookUp`, just shifted by one level, and only invoked after a successful insert.

**Sample Input**
```
4
I x VAR
S
I x VAR
S
I y VAR
I x VAR
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I x VAR
	Inserted in ScopeTable# 1 at position 1, 1
Cmd 2: S
	ScopeTable# 2 created
Cmd 3: I x VAR
	Inserted in ScopeTable# 2 at position 1, 1
	Warning: 'x' shadows a declaration in ScopeTable# 1
Cmd 4: S
	ScopeTable# 3 created
Cmd 5: I y VAR
	Inserted in ScopeTable# 3 at position 2, 1
Cmd 6: I x VAR
	Inserted in ScopeTable# 3 at position 1, 1
	Warning: 'x' shadows a declaration in ScopeTable# 2
Cmd 7: Q
	ScopeTable# 3 removed
	ScopeTable# 2 removed
	ScopeTable# 1 removed
```

---
## Problem 3 — Find Every Occurrence (`F`) · *Easy–Medium*

**New command:** `F <key>` — exactly one argument (same convention as `L`/`D`).

**Task:** `L` stops at the nearest scope where `key` is found. `F` must **not** stop early — it walks the whole chain from the current scope to the root and prints a line for **every** scope table that contains `key` (a name can legally appear in several scopes at once because of shadowing).

**Exact output**, one line per hit, nearest scope first, reusing `L`'s wording:
```
	'<key>' found in ScopeTable# <U> at position <bucket>, <pos>
```
If not found anywhere in the chain:
```
	'<key>' not found in any of the ScopeTables
```

**Hint:** same traversal skeleton as `SymbolTable::lookUp`, just don't `break`/return on the first hit — keep going until you fall off the root.

**Sample Input**
```
4
I x VAR
S
I x VAR
S
I y VAR
I x VAR
F x
F z
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I x VAR
	Inserted in ScopeTable# 1 at position 1, 1
Cmd 2: S
	ScopeTable# 2 created
Cmd 3: I x VAR
	Inserted in ScopeTable# 2 at position 1, 1
Cmd 4: S
	ScopeTable# 3 created
Cmd 5: I y VAR
	Inserted in ScopeTable# 3 at position 2, 1
Cmd 6: I x VAR
	Inserted in ScopeTable# 3 at position 1, 1
Cmd 7: F x
	'x' found in ScopeTable# 3 at position 1, 1
	'x' found in ScopeTable# 2 at position 1, 1
	'x' found in ScopeTable# 1 at position 1, 1
Cmd 8: F z
	'z' not found in any of the ScopeTables
Cmd 9: Q
	ScopeTable# 3 removed
	ScopeTable# 2 removed
	ScopeTable# 1 removed
```

---
## Problem 4 — Delete Everywhere (`G`) · *Medium*

**New command:** `G <key>` — exactly one argument.

**Task:** `D` deletes `key` only from the current (innermost) scope. `G` must delete `key` from **every** scope table in the chain (current up to root) where it exists — not just the first match.

**Exact output**, one line per successful deletion (current scope first, then outward), reusing `D`'s wording:
```
	Deleted '<key>' from ScopeTable# <U> at position <bucket>, <pos>
```
If `key` isn't found in *any* scope in the chain, print a single line (nothing per-scope):
```
	'<key>' not found in any of the ScopeTables
```

**Hint:** walk the chain the way `lookUp`/`printAllScopes` do, but call each table's existing `Delete(...)` (the same one `D` already uses) instead of `lookUp`.

**Sample Input**
```
5
I x VAR
S
I x VAR
S
I x VAR
G x y
G x
P A
G y
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I x VAR
	Inserted in ScopeTable# 1 at position 1, 1
Cmd 2: S
	ScopeTable# 2 created
Cmd 3: I x VAR
	Inserted in ScopeTable# 2 at position 1, 1
Cmd 4: S
	ScopeTable# 3 created
Cmd 5: I x VAR
	Inserted in ScopeTable# 3 at position 1, 1
Cmd 6: G x y
	Number of parameters mismatch for the command G
Cmd 7: G x
	Deleted 'x' from ScopeTable# 3 at position 1, 1
	Deleted 'x' from ScopeTable# 2 at position 1, 1
	Deleted 'x' from ScopeTable# 1 at position 1, 1
Cmd 8: P A
	ScopeTable# 3
	1--> 
	2--> 
	3--> 
	4--> 
	5--> 
		ScopeTable# 2
		1--> 
		2--> 
		3--> 
		4--> 
		5--> 
			ScopeTable# 1
			1--> 
			2--> 
			3--> 
			4--> 
			5--> 
Cmd 9: G y
	'y' not found in any of the ScopeTables
Cmd 10: Q
	ScopeTable# 3 removed
	ScopeTable# 2 removed
	ScopeTable# 1 removed
```

---
## Problem 5 — Auto-Rehashing · *Medium–Hard*

**Modifies:** `ScopeTable::insert` (no new command letter — this changes how `I` behaves once a table gets crowded).

**Task:** Every `ScopeTable` must track how many symbols it currently holds. Immediately after a successful insertion (i.e. right after the usual `Inserted in ScopeTable# ...` line), if the table's element count has become **strictly greater than its current bucket size** (load factor > 1), the table must:
1. Double its bucket count.
2. Recompute the SDBM hash of **every** existing symbol (including the one you just inserted) against the new bucket count, and rebuild the chains — walking the old buckets from index 0 upward, preserving each bucket's original chain order.
3. Print exactly one line:
```
	Rehashing ScopeTable# <U>: bucket size increased from <old> to <new>
```
This can fire more than once on the same table as it keeps growing (e.g. 3 → 6 → 12 → ...). Deletions never shrink a table — this problem is growth-only.

**Hint:** allocate a new `SymbolInfo**` array, iterate the OLD buckets left→right, rehash each node's `getName()` against the new size, relink into the new array, `delete[]` the old array, and **only then** update the `bucketSize` member (you need the old size to iterate the old array correctly, and the new size for the rehash calls).

**Sample Input**
```
3
I a VAR
I b VAR
I c VAR
I d VAR
I e VAR
I f VAR
I g VAR
P C
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I a VAR
	Inserted in ScopeTable# 1 at position 2, 1
Cmd 2: I b VAR
	Inserted in ScopeTable# 1 at position 3, 1
Cmd 3: I c VAR
	Inserted in ScopeTable# 1 at position 1, 1
Cmd 4: I d VAR
	Inserted in ScopeTable# 1 at position 2, 2
	Rehashing ScopeTable# 1: bucket size increased from 3 to 6
Cmd 5: I e VAR
	Inserted in ScopeTable# 1 at position 6, 1
Cmd 6: I f VAR
	Inserted in ScopeTable# 1 at position 1, 1
Cmd 7: I g VAR
	Inserted in ScopeTable# 1 at position 2, 2
	Rehashing ScopeTable# 1: bucket size increased from 6 to 12
Cmd 8: P C
	ScopeTable# 1
	1--> 
	2--> <a,VAR> 
	3--> <b,VAR> 
	4--> <c,VAR> 
	5--> <d,VAR> 
	6--> <e,VAR> 
	7--> <f,VAR> 
	8--> <g,VAR> 
	9--> 
	10--> 
	11--> 
	12--> 
Cmd 9: Q
	ScopeTable# 1 removed
```

*(With bucket size 3: the 4th insert pushes count to 4 > 3, doubling to 6. The 7th insert pushes count to 7 > 6, doubling to 12.)*

---
## Problem 6 — Merge Scope Into Parent (`M`) · *Hard*

**New command:** `M` — takes no arguments.

**Task:** Right now `E` throws away everything in the current scope when it exits. `M` should instead fold the current scope's symbols into its **parent** before discarding the (now-empty) current scope table, then make the parent the new current scope — like `E`, but symbols survive by moving outward one level instead of disappearing.

**Processing order:** walk the current table's buckets from index 0 upward, and within each bucket walk the chain in its existing order. For each symbol:
- If the parent does **not** already have a symbol with that name, insert it into the parent, reusing the exact message the `I` command already prints (it's the same underlying insert):
```
	Inserted in ScopeTable# <parentU> at position <bucket>, <pos>
```
- If the parent **already** has a symbol with that name, the child's copy is simply dropped:
```
	'<key>' already exists in ScopeTable# <parentU>
```

After all symbols are processed, print one summary line, then behave like `E` (child is gone, current becomes the parent):
```
	ScopeTable# <childU> merged into ScopeTable# <parentU>
```

Just like `E`, `M` must be **silently ignored** — no `Cmd` line at all, nothing printed, no command number consumed — if the current scope is the root scope (there's no parent to merge into).

**Hint:** notice the sample input opens with a bare `M` while still in the root scope — that's testing whether you correctly no-op it exactly the way your existing code already no-ops `E` at the root (`getCurrentScope() == 1`), reused for a second command letter.

**Sample Input**
```
3
M
I a VAR
I b VAR
S
I b VAR
I c VAR
M
P C
Q
```

**Sample Output**
```
	ScopeTable# 1 created
Cmd 1: I a VAR
	Inserted in ScopeTable# 1 at position 2, 1
Cmd 2: I b VAR
	Inserted in ScopeTable# 1 at position 3, 1
Cmd 3: S
	ScopeTable# 2 created
Cmd 4: I b VAR
	Inserted in ScopeTable# 2 at position 3, 1
Cmd 5: I c VAR
	Inserted in ScopeTable# 2 at position 1, 1
Cmd 6: M
	Inserted in ScopeTable# 1 at position 1, 1
	'b' already exists in ScopeTable# 1
	ScopeTable# 2 merged into ScopeTable# 1
Cmd 7: P C
	ScopeTable# 1
	1--> <c,VAR> 
	2--> <a,VAR> 
	3--> <b,VAR> 
Cmd 8: Q
	ScopeTable# 1 removed
```
---
## Problem 7 - Shadow Warning `I` Version 2 · *Hard*
**Modifies:** the existing `I` command (no new command letter)

**Task**: It's a modified version of **Problem 2**, where you were asked to print warning about only the **nearest ancestor**. But now you will print warning for **all ancestors**.

---
## A few exam-day habits worth rehearsing

- **Back up first.** Before touching anything, `cp` your working files to a `_backup` copy. If you break something with 5 minutes left, you want a fallback that still gets partial credit.
- **Re-run the original `sample_input.txt` after your change.** A shocking number of lost marks come from a "new feature" accidentally breaking `I`, `S`, `E`, or the destructor's cleanup messages. Diff against the original `sample_output.txt` to confirm nothing regressed.
- **Match argument-count validation style exactly.** Every command in this codebase validates argument count with the same `!(stream >> key) || stream >> type` idiom and prints `Number of parameters mismatch for the command X`. Examiners notice when a new command skips this.
- **Watch the 1-indexing.** Bucket and position numbers are always printed 1-indexed even though the internal arrays are 0-indexed (`bucket + 1` on insert, `bucket++` before return on lookup/delete). It's an easy off-by-one to reintroduce in new code.
- **Remember `Q` exits immediately.** Anything after `Q` in the input is never read — don't forget this if your new feature needs cleanup logic; it has to happen at the point of the command itself or in the destructor, not "eventually."
