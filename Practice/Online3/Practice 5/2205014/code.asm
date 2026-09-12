format ELF executable 3
entry main
segment readable writeable
segment readable executable
main:
	PUSH EBP
	MOV EBP, ESP
	SUB ESP, 4
	SUB ESP, 4
.L1:
	MOV EAX, 10		; Line 3
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, 5		; Line 4
	MOV EDX, EAX
	MOV EAX, [EBP-4]		; Line 4
 	CMP EAX, EDX
	JL .L3
	JMP .L5
.L3:
	MOV EAX, 1		; Line 4
	JMP .L4
.L5:
	MOV EAX, 0		; Line 4
.L4:
	PUSH EAX
	POP EAX
	CMP EAX, 0
	JE .L8
.L7:
MOV EAX, 100
	MOV [EBP-8], EAX
	JMP .L9
.L8:
MOV EAX, 200
	MOV [EBP-8], EAX
	JMP .L9
.L9:
.L10:
	MOV EAX, [EBP-8]		; Line 5
	INC EAX
	PUSH EAX
	MOV [EBP-8], EAX
	POP EAX		; Line 5
	MOV [EBP-4], EAX
	PUSH EAX
	POP EAX
.L11:
	MOV EAX, [EBP-4]		; Line 6
	CALL print_number
.L12:
	MOV EAX, [EBP-8]		; Line 7
	CALL print_number
.L13:
	MOV EAX, 0		; Line 8
	JMP main_EXIT
.L14:
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