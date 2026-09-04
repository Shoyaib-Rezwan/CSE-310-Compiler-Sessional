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
	MOV EAX, 10		; Line 6
	MOV [a], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, 20		; Line 8
	MOV [b], EAX
	PUSH EAX
	POP EAX
.L3:
	MOV EAX, 100		; Line 10
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L4:
	MOV EAX, 200		; Line 12
	MOV [EBP-8], EAX
	PUSH EAX
	POP EAX
.L5:
	MOV EAX, [a]		; Line 14
	CALL print_number
.L6:
	JMP L1
.L7:
	L2:
.L8:
	MOV EAX, [b]		; Line 19
	CALL print_number
.L9:
	JMP L3
.L10:
	L1:
.L11:
	MOV EAX, [EBP-4]		; Line 24
	CALL print_number
.L12:
	JMP L2
.L13:
	L3:
.L14:
	MOV EAX, [EBP-8]		; Line 29
	CALL print_number
.L15:
	MOV EAX, 0		; Line 31
	JMP main_EXIT
.L16:
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