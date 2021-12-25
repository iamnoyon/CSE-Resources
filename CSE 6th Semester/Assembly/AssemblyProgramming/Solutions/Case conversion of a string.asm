.MODEL SMALL 
.STACK 100H
.DATA
    MSG  DB  0DH,0AH, ' Enter a String:  $'
    MSG2 DB  0DH,0AH, ' Converted string is:  $'
    STR1 DB  255 DUP(?)
    
.CODE

    MAIN PROC
            MOV AX,@DATA
            MOV DS,AX
            
            LEA DX,MSG
            MOV AH,09H
            INT 21H
            
            LEA SI,STR1
            MOV AH,01H
    
        READ:
            INT 21H
            
            CMP AL,0DH
            JE  DISPLAY
            
            CMP AL,65
            JGE CHECK
            
            CMP AL,97
            JGE CHECK2 
            
            JMP NC 
            
        NC:
            MOV [SI],AL
            INC SI
            JMP READ    
            
        CHECK:
            CMP AL,90
            JLE CHANGE
            
        CHECK2:
            CMP AL,122
            JLE CHANGE
                
        CHANGE:
            XOR AL,20H
            MOV [SI],AL
            INC SI
            
            JMP READ  
        
        DISPLAY:
        
            MOV AL,'$'
            MOV [SI],AL
            
            LEA DX,MSG2
            MOV AH,09H
            INT 21H
            
            LEA DX,STR1
            MOV AH,09H
            INT 21H
    
            MOV AH,4CH
            INT 21H
            MAIN ENDP
    END MAIN