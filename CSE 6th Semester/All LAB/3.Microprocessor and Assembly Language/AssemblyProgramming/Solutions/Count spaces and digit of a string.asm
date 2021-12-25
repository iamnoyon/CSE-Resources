.MODEL SMALL
.STACK 100H
.DATA
    MSG DB 0DH,0AH, 'ENTER STRING: $'
    MSG1 DB 0DH,0AH, 'NUMBER OF DIGITS: $'
    MSG2 DB 0DH, 0AH, 'NUMBER OF SPACES: $'
    
    STR DB 255 DUP(?)
    
.CODE 
    MAIN PROC 
        MOV CX,48
        MOV BX,48
        MOV BL,48
        MOV CL,48
        
        
        MOV AX,@DATA
        MOV DS,AX
        
        LEA DX,MSG
        MOV AH, 9
        INT 21H 
        
        LEA SI,STR
        MOV AH,1
        
    READ:
        INT 21H
        
        CMP AL,0DH
        JE DISPLAY
        
        CMP AL,32
        JE COUNTSPACE
        
        CMP AL,48
        JGE DIGITCOUNT
        JMP READ
        
        
    COUNTSPACE: 
        MOV DL,BL
        INC DL
        
        MOV BL,DL
        JMP READ
        
        
    DIGITCOUNT:
        CMP AL,57
        JLE COUNTDIGIT
        JMP READ
        
    COUNTDIGIT:
        MOV DL,CL
        INC DL
        MOV CL,DL
        JMP READ        
          
    DISPLAY: 
        LEA DX,MSG2
        MOV AH,9
        INT 21H
        MOV DL,BL
        MOV AH,2
        INT 21H 
        
        LEA DX,MSG1
        MOV AH,9
        INT 21H
        
        MOV DL,CL
        MOV AH,2
        INT 21H
        
        
        
        MOV AH,4CH
        INT 21H
        
        
        
        
        MAIN ENDP
    END MAIN