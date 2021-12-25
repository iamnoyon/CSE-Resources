;This is the programe for Revesing any string

.MODEL SMALL
.STACK 100H
.DATA
MSG1 DB 'Enter any string: $'
MSG2 DB 0AH,0DH,'Reversing stirng is: $'

X DB 80 DUP (?)

.CODE
MAIN PROC
MOV DX,@DATA
MOV DS,DX


LEA DX,MSG1
MOV AH,9
INT 21H

MOV BX,0000H

MOV AH,1
NEXT_1:
        INT 21H
        CMP AL,0DH
        JE EXIT_LOOP
        MOV X[BX],AL
        INC BX
        JMP NEXT_1
       
	   EXIT_LOOP:
          DEC BX
           MOV AH,2

LEA DX,MSG2
MOV AH,9
INT 21H
MOV AH,2


NEXT_2:
        MOV DL,X[BX]
        INT 21H
        DEC BX
        CMP BX,-1
        JNZ NEXT_2
MOV AH,4CH
INT 21H

MAIN ENDP
END MAIN

