.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 0AH,0DH,'Enter any string: $'
MSG2 DB 0AH,0DH,'The string is: $'
MSG3 DB 0AH,0DH,'Sequence length by space: $'
X DB 80 DUP (?)
Y DB 80 DUP (?)

.CODE
MAIN PROC
MOV DX,@DATA
MOV DS,DX

LEA DX,MSG1
MOV AH,9
INT 21H

MOV SI,0   ;index
NEXT_1:
        MOV AH,1     ;input string
        INT 21H
        CMP AL,0DH
        JE EXIT_LOOP

        MOV X[SI],AL  ;string array
        INC SI
        JMP NEXT_1

EXIT_LOOP:

        LEA DX,MSG2
        MOV AH,9
        INT 21H

        MOV DI,SI
        MOV SI,0
OUTPUT:
        MOV DL,X[SI]  ;print string
        MOV AH,2
        INT 21H

        INC SI
        CMP SI,DI
        JNZ OUTPUT

        LEA DX,MSG3
        MOV AH,9
        INT 21H

        MOV DI,SI
        MOV SI,0    ;index
        MOV BP,0
        MOV BX,0

        MOV AH,0
        MOV AL,0
        MOV BL,0    ;counter sequence
       
NEXT_2:
        MOV AL,X[SI+1]
        MOV AH,X[SI]
        SUB AL,AH        ;find sequence
        CMP AL,1
        JE SEQUENCE



        MOV DL,BL    ;print count
        ADD DL,30H
        MOV AH,2
        INT 21H

        MOV DL,20H   ;print space
        INT 21H

        MOV BL,0   ;reset BL counter
        INC SI
        CMP SI,DI
        JNZ NEXT_2
        JMP SEQ_LENGTH

SEQUENCE:
        INC BL
        INC SI
        CMP SI,DI
        JNZ NEXT_2

SEQ_LENGTH:

MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN


