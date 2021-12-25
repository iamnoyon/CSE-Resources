.MODEL SMALL
.STACK 100H

.DATA
    STR DB 20 DUP (?)
    SUBSTR DB 10 DUP (?)
    
    LEN1 DB 0
    LEN2 DB 0
    
    MSG1 DB 'STRING IS : $'
    MSG2 DB 10,13,'SUBSTRING IS : $'
    MSG3 DB 10,13,'SUBSTRING IS FOUND$'
    MSG4 DB 10,13,'Not Found $'

DISPLAY MACRO MSG
    MOV AH,9
    LEA DX,MSG
    INT 21H
ENDM

.CODE        
    MAIN PROC
            MOV AX,DATA
            MOV DS,AX
            DISPLAY MSG1 
             
            LEA SI,STR
            MOV AH,01H
        READSTR:
            INT 21H
            CMP AL,0DH
            JE RESET1
            MOV [SI],AL
            INC SI   
            JMP READSTR
        RESET1:
            MOV SI,0
            JMP NXT1    
        NXT1:
            CMP [SI],'$'
            JE DONE1
            INC LEN1
            INC SI
            JMP NXT1 
            
        DONE1:
            DISPLAY MSG2
            LEA DI,SUBSTR
            MOV AH,01H
            JMP READSUBSTR
            
        READSUBSTR:
            INT 21H
            CMP AL,0DH
            JE RESET2
            MOV [DI],AL
            INC DI
            JMP READSUBSTR
        RESET2:
            MOV DI,0
            JMP NXT2        
            
        NXT2:
            CMP [DI],'$'
            JE DONE2
            INC LEN2
            INC DI
            JMP NXT2
            
        DONE2:
            LEA SI,STR
            MOV AL,LEN1
            SUB AL,LEN2
            MOV CL,AL
            MOV CH,0  
            
        FIRST:
            MOV AL,[SI]
            CMP AL,SUBSTR[0]
            JE CMPR
            INC SI
            LOOP FIRST
            
        CMPR:
            INC SI
            MOV AL,[SI]
            CMP AL,SUBSTR[1]
            JNE NOTEQUAL
            INC SI
            MOV AL,[SI]
            CMP AL,SUBSTR[2]
            JE EQUAL      
            
        NOTEQUAL:
            DISPLAY MSG4
            JMP EXIT   
            
        EQUAL:
            DISPLAY MSG3
            JMP EXIT  
            
        EXIT: 
            MOV AH,4CH
            INT 21H
        MAIN ENDP
    END MAIN