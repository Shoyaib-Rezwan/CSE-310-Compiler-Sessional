format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
.L1:
	MOV EAX, 2		; Line 4
	MOV EDX, EAX
	MOV EAX, 1		; Line 4
	CMP EAX, EDX
	JLE .L2
	JMP .L4
.L2:
	MOV EAX, 1		; Line 4
	JMP .L3
.L4:
	MOV EAX, 0		; Line 4
.L3:
	CMP EAX, 0
	JNE .L6
	MOV EAX, 3		; Line 4
	MOV EDX, EAX
	MOV EAX, 2		; Line 4
	CMP EAX, EDX
	JL .L9
	JMP .L11
.L9:
	MOV EAX, 1		; Line 4
	JMP .L10
.L11:
	MOV EAX, 0		; Line 4
.L10:
	CMP EAX, 0
	JE .L14
	MOV EAX, 5		; Line 4
	MOV EDX, EAX
	MOV EAX, 4		; Line 4
	CMP EAX, EDX
	JL .L16
	JMP .L18
.L16:
	MOV EAX, 1		; Line 4
	JMP .L17
.L18:
	MOV EAX, 0		; Line 4
.L17:
	CMP EAX, 0
	JE .L14
	JMP .L13
.L13:
	MOV EAX, 1		; Line 4
	JMP .L15
.L14:
	MOV EAX, 0		; Line 4
.L15:
	CMP EAX, 0
	JNE .L6
	JMP .L7
.L6:
	MOV EAX, 1		; Line 4
	JMP .L8
.L7:
	MOV EAX, 0		; Line 4
.L8:
	MOV [EBP-4], EAX
.L20:
	MOV EAX, [EBP-4]		; Line 5
	CALL print_number
.L21:
	ADD ESP, 4
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
