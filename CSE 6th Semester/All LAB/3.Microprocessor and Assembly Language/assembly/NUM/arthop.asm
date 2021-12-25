

.MODEL SMALL
.STACK 100H
.DATA
   CR EQU 0DH
   LF EQU 0AH
MSG1   DB  'ENTER 1st NUMBER(0-9): $'
MSG2   DB  CR,LF, 'ENTER 2nd NUMBER(0-9): $'
MSG3   DB  CR,LF, 'SELECT (ADDITION=1, SUBTRACT=2, MUL=3, DIV=4) $'
MSG4   DB  CR,LF, 'RESULT: $'

RES    DB  0    
NUM1   DB  0
NUM2   DB  0
CHOICE DB  0
  
.CODE
MAIN PROC
    
	MOV AX,@DATA
    MOV DS,AX
	
	;printing MSG1                
    LEA  DX,MSG1
    MOV  AH,9
    INT 21H
	
	;ENTER NUM1                
    MOV  AH,1
    INT 21H
	
	SUB AL,48
	MOV NUM1,AL
	
	;printing MSG2                
    LEA  DX,MSG2
    MOV  AH,9
    INT 21H
	
	;ENTER NUM2                
    MOV  AH,1
    INT 21H
	
	SUB AL,48
	MOV NUM2,AL
	
    ;printing MSG3                
    LEA  DX,MSG3
    MOV  AH,9
    INT 21H
	
	;ENTER CHOICE               
    MOV  AH,1
    INT 21H
	
	SUB AL,48
	MOV CHOICE,AL
	
	CMP AL,1
	JE ADDITION
	CMP AL,2
	JE SUBTRACT
	CMP AL,3
	JE MULTIPLY
	CMP AL,4
	JE DIVIDE
	JMP EXIT_
	
	
ADDITION:
    MOV AL,NUM1
	ADD AL,NUM2
	JMP PRINT

SUBTRACT:
    MOV AL,NUM1
	SUB AL,NUM2
	JMP PRINT
  
MULTIPLY:
    MOV AL,NUM1
	MUL NUM2
	JMP PRINT

  DIVIDE:
    MOV AH,0
    MOV AL,NUM1
	DIV NUM2
	JMP PRINT
  
PRINT: 
    ;printing MSG4
    ADD  AL,48
	MOV  RES,AL 	
    
	LEA  DX,MSG4
    MOV  AH,9
    INT 21H
	
	MOV  AH,2
	MOV  DL,RES
    INT 21H

EXIT_:           
    ;DOS exit
    MOV AH, 4CH
    INT 21H
	
MAIN ENDP
     END MAIN