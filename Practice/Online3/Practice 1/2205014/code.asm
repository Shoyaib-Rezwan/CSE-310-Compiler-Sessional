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
	MOV EAX, 3		; Line 6
	MOV ECX, EAX
	MOV EAX, 2		; Line 6
	IMUL ECX
	PUSH EAX
	MOV EAX, 9		; Line 6
	MOV EDX, EAX
	POP EAX		; Line 6
	ADD EAX, EDX
	PUSH EAX
	POP EAX		; Line 6
	MOV [EBP-8], EAX
	PUSH EAX
	POP EAX		; Line 6
	MOV [b], EAX
	PUSH EAX
	POP EAX		; Line 6
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX		; Line 6
	MOV [a], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, [a]		; Line 8
	CALL print_number
.L3:
	MOV EAX, [EBP-4]		; Line 9
	CALL print_number
.L4:
	MOV EAX, [b]		; Line 10
	CALL print_number
.L5:
	MOV EAX, [EBP-8]		; Line 11
	CALL print_number
.L6:
	MOV EAX, 0		; Line 12
	JMP main_EXIT
.L7:
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