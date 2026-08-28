format ELF executable 3
entry main
segment readable writeable
	x dd 1 DUP (0)
	y dd 1 DUP (0)
segment readable executable
add:
	PUSH EBP
	MOV EBP, ESP
	MOV EAX, 5       ; Line 4
	MOV [x], EAX
	PUSH EAX
	POP EAX
.L1:
	MOV EAX, 6       ; Line 5
	MOV [y], EAX
	PUSH EAX
	POP EAX
.L2:
	MOV EAX, [y]       ; Line 6
	MOV EDX, EAX
	MOV EAX, [x]       ; Line 6
	ADD EAX, EDX
	PUSH EAX
	POP EAX       ; Line 6
	MOV [x], EAX
	PUSH EAX
	POP EAX
.L3:
	MOV EAX, 0       ; Line 7
	JMP .L5
.L4:
.L5:
	POP EBP
	RET 
main:
	PUSH EBP
	MOV EBP, ESP
	MOV EAX, [x]       ; Line 11
	CALL print_number
.L6:
	MOV EAX, 0       ; Line 12
	JMP .L8
.L7:
.L8:
	POP EBP
	MOV EAX,1
	XOR EBX, EBX
	INT 0x80
	POP EBP
	RET
;-------------------------------
;         print library         
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
