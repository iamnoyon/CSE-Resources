.MODEL SMALL 
.STACK 100H
.DATA
    MSG1 DB 0DH,0AH, 'INPUT STRING: $'
    MSG2 DB 0DH,0AH, 'REVESRE STRING: $'
.CODE
    MAIN PROC   
            MOV CX,0
            MOV AX,@DATA
            MOV DS,AX
            
            LEA DX,MSG1
            MOV AH,9
            INT 21H
            
        INPUT:
            MOV AH,1
            INT 21H
            
            CMP AL,0DH
            JE LINE
            
            AND DX,0
            MOV DL,AL
            PUSH DX
            INC CX
            JMP INPUT
        
        LINE:
            MOV DX,0DH
            MOV AH,2
            INT 21H
            MOV DX,0AH
            MOV AH,2
            INT 21H
            
            LEA DX,MSG2
            MOV AH,9
            INT 21H    
            
        PRINT:
            AND DX,0
            POP DX
            MOV AH,2
            INT 21H
            LOOP PRINT
            
            MOV AH,4CH
            INT 21H
            
            MAIN ENDP
    END MAIN
                                