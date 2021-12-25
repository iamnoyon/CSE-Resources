.MODEL small
.STACK 1000h                        ; Don't skimp with stack!

.DATA
    Struct0A EQU $                  ; Buffer for INT 21h/0Ah (max,got,buf)
        max db 100                  ; Maximum characters buffer can hold (incl. CR (0Dh))
        got db 0                    ; Number of characters actually read, (excl. CR (0Dh))
        buf db 100 dup (0)          ; Actual characters read, including the final carriage return (0Dh)
    Linefeed db 13, 10, '$'
    GetString   db 'Enter string: $'

.CODE
start:
    mov ax, @DATA                           ; Initialize DS
    mov ds, ax

    ; Input String
    mov ah, 09h
    mov dx, OFFSET GetString
    int 21h
    mov dx, OFFSET Struct0A
    mov ah, 0Ah
    INT 21h

    mov si, OFFSET buf                      ; Base for [si + bx] 
    xor bx, bx                              ; Prepare BX for following byte load
    mov bl, got                             ; Load length of string = 0Dh at the end
    mov BYTE PTR [si + bx], '$'             ; Delimiter for int 21h / 09h

    outer:
    dec bx                                  ; The last character is already at the right place
    jz done                                 ; No characters left = done
    mov cx, bx                              ; CX: loop variable
    mov si, OFFSET buf
    xor dl, dl                              ; DL (hasSwapped) = false

    inner:
    mov ax, [si]                            ; Load **two** characters
    cmp al, ah                              ; AL: 1. char, AH: 2. char
    jbe S1                                  ; AL <= AH - no change
    mov dl, 1                               ; hasSwapped = true
    xchg al, ah                             ; Swap characters
    mov [si], ax                            ; Store swapped characters
    S1:
    inc si                                  ; Next pair of characters
    loop inner

    test dl, dl                             ; hasSwapped == true?
    jnz outer                               ; yes: once more
    done:

    ; Print result
    mov dx, OFFSET Linefeed
    mov ah, 09h
    int 21h
    mov dx, OFFSET buf
    mov ah, 09h
    int 21h

    mov ax, 4C00h
    int 21h

END start