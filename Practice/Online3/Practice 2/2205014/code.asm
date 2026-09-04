format ELF executable 3
entry main
segment readable writeable
	a dd 1 DUP (0)
	b dd 1 DUP (0)
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
	SUB ESP, 4
.L1:
	MOV EAX, 10		; Line 5
	MOV [a], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, 20		; Line 7
	MOV [b], EAX
	PUSH EAX
	POP EAX
.L3:
	MOV EAX, 100		; Line 9
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L4:
	MOV EAX, 200		; Line 11
	MOV [EBP-8], EAX
	PUSH EAX
	POP EAX
.L5:
	MOV EAX, [a]
	CALL print_number
	MOV EAX, [b]
	CALL print_number
	MOV EAX, [EBP-4]
	CALL print_number
	MOV EAX, [EBP-8]
	CALL print_number
.L6:
	MOV EAX, 2		; Line 15
	MOV ECX, EAX
	MOV EAX, [a]		; Line 15
 	IMUL ECX
	PUSH EAX
	MOV EAX, [b]		; Line 15
 	MOV EDX, EAX
	POP EAX		; Line 15
	ADD EAX, EDX
	PUSH EAX
	POP EAX
	CALL print_number
	MOV EAX, [EBP-8]		; Line 15
 	MOV EDX, EAX
	MOV EAX, [EBP-4]		; Line 15
 	ADD EAX, EDX
	PUSH EAX
	MOV EAX, 10		; Line 15
	MOV EDX, EAX
	POP EAX		; Line 15
	SUB EAX, EDX
	PUSH EAX
	POP EAX
	CALL print_number
	MOV EAX, 7		; Line 15
	MOV ECX, EAX
	MOV EAX, 3		; Line 15
	IMUL ECX
	PUSH EAX
	POP EAX		; Line 15
	MOV EDX, EAX
	MOV EAX, 3		; Line 15
	ADD EAX, EDX
	PUSH EAX
	POP EAX
	CALL print_number
.L7:
	MOV EAX, [b]		; Line 17
 	MOV EDX, EAX
	MOV EAX, [a]		; Line 17
 	CMP EAX, EDX
	JE .L8
	JMP .L10
.L8:
	MOV EAX, 1		; Line 17
	JMP .L9
.L10:
	MOV EAX, 0		; Line 17
.L9:
	PUSH EAX
	POP EAX
	CALL print_number
	MOV EAX, [a]		; Line 17
 	CMP EAX, 0
	JE .L13
	MOV EAX, [b]		; Line 17
 	CMP EAX, 0
	JE .L13
	JMP .L12
.L12:
	MOV EAX, 1		; Line 17
	JMP .L14
.L13:
	MOV EAX, 0		; Line 17
.L14:
	PUSH EAX
	POP EAX
	CALL print_number
	MOV EAX, [a]		; Line 17
	PUSH EAX
	INC EAX
	MOV [a], EAX
	POP EAX
	CALL print_number
	MOV EAX, [a]		; Line 17
 	NEG EAX
	PUSH EAX
	POP EAX
	CALL print_number
.L15:
	MOV EAX, 0		; Line 19
	JMP main_EXIT
.L16:
.L17:
main_EXIT:
	ADD ESP, 8
	POP EBP
	MOV EAX,1
	XOR EBX, EBX
	INT 0x80
	POP EBP
	RET
;-------------------------------
;	print library
;-------------------------------
print_number:
    push eax
    push ebx
    push ecx
    push edx
    push esi
    push edi

    sub esp, 32             ; local buffer

    test eax, eax
    jns .positive

    ; print '-'
    push eax

    sub esp, 1
    mov byte [esp], '-'

    mov eax, 4              ; sys_write
    mov ebx, 1              ; stdout
    mov ecx, esp
    mov edx, 1
    int 0x80

    add esp, 1
    pop eax

    neg eax

.positive:
    mov ebx, 10

    lea esi, [esp + 31]
    mov byte [esi], 10
    dec esi

.convert:
    xor edx, edx
    div ebx

    add dl, '0'
    mov [esi], dl
    dec esi

    test eax, eax
    jnz .convert

    inc esi

    lea edx, [esp + 32]
    sub edx, esi

    mov eax, 4              ; sys_write
    mov ebx, 1              ; stdout
    mov ecx, esi
    int 0x80

    add esp, 32

    pop edi
    pop esi
    pop edx
    pop ecx
    pop ebx
    pop eax
    ret
;-------------------------------