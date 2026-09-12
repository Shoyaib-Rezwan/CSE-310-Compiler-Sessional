format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
MOV EAX, 5
	MOV [EBP-4], EAX
.L1:
	SUB ESP, 4
	MOV EAX, 2		; Line 3
	MOV ECX, EAX
	MOV EAX, [EBP-4]		; Line 3
 	IMUL ECX
	MOV [EBP-8], EAX
.L2:
	MOV EAX, [EBP-4]		; Line 4
	CALL print_number
.L3:
	MOV EAX, [EBP-8]		; Line 5
	CALL print_number
.L4:
	MOV EAX, 0		; Line 6
	JMP .L5
.L5:
	ADD ESP, 8
	POP EBP
	MOV EAX,1
	XOR EBX, EBX
	INT 0x80
	POP EBP
	RET
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
