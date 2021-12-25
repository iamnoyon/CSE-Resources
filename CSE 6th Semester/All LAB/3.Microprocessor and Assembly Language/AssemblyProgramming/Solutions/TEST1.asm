.MODEL SMALL
.STACK 100H
.DATA
    MSG1 DB 0DH,0AH, 'ENTER THE NUMBERS: $'
    MSG2 DB 0DH,0AH, 'eVEN IS:$' 
    MSG3 DB 0DH,0AH, 'ODDIS:$'
    STR DB 255 DUP(?)
    STR2 DB 255 DUP(?)
    
.CODE
    MAIN PROC
        MOV CX,1
        MOV AX,@DATA
        MOV DS,AX
        
        LEA DX,MSG1
        MOV AH,9
        INT 21H
        
        LEA SI,STR
        LEA DI,STR2
        
        MOV AH,1
        
    READ:
        INT 21H
        
        CMP AL,0DH
        JE DISPLAY
        
        CMP AL,48
        JGE NUM
        
        JMP READ
        
    NUM:
        CMP AL,57
        JLE CHECK
        JMP READ     
        
    CHECK:
    
        MOV BL,AL
        TEST BL, 01H
        JE EVEN
        JNE ODD
    EVEN:
       ; MOV BX,CX
        MOV [SI],CX
        INC CX
        INC SI
        JMP READ
    ODD:
        MOV DX,CX
        MOV [DI],CX
        INC CX
        INC DI
        JMP READ
        
    DISPLAY:
        LEA DX,MSG2
        MOV AH,9
        INT 21H
        MOV CX,4
        JMP DISPLAY1             
            
        
    DISPLAY1:
        MOV DX,[SI]
        ADD DX,48
        MOV AH,2
        INT 21H
        DEC SI
        LOOP DISPLAY1
    
    DISPLAY3:
        LEA DX,MSG3
        MOV AH,9
        INT 21H
        MOV CX,4
        JMP DISO    
        
    DISO:
        MOV DX,[DI]
        ADD DX,48
        MOV AH,2
        INT 21H
        DEC DI
        LOOP DISO
        
    EXIT:    
        MOV AH,4CH
        INT 21H
            
        
        MAIN ENDP
    END MAIN
        
        
            
            