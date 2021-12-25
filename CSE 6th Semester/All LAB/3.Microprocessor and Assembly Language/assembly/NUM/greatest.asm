.MODEL SMALL
.STACK 100H
.DATA
   CR EQU 0DH
   LF EQU 0AH
MSG1   DB  'ENTER N(0-9): $'
MSG2   DB  CR,LF, 'ENTER ARRAY: $'
MSG3   DB  CR,LF, 'GREATEST NUMBER: $'


  N    DB  0    ; input number
 ARR   DB  10 DUP(?)
 MAX   DB  0
.CODE
MAIN PROC
    
	MOV AX,@DATA
    MOV DS,AX
	
	;printing MSG1      ENTER N:           
    LEA  DX,MSG1
    MOV  AH,9
    INT 21H
	
	;ENTER N                
    MOV  AH,1
    INT 21H
	
	;char to number
	SUB AL,48
	MOV N,AL
	
	MOV AH,2
	MOV DL,CR
	INT 21H
	MOV DL,LF
	INT 21H
	
	
	XOR BX,BX 
    XOR CX,CX
	MOV CL,N
	
	MOV AH,1
FOR_:
    INT 21H
	SUB AL,48
	MOV ARR[BX],AL
	INC BX
	MOV AH,1
	MOV DL,' '
	INT 21H
	LOOP FOR_
    	
   ;finding greatest number
	XOR BX,BX
    MOV AL,ARR[BX]
	MOV MAX,AL
	
	XOR CX,CX
	MOV CL,N
    
WHILE_:
    INC BX
	MOV AL,MAX  
    CMP ARR[BX],AL
	JG  MODIFY
TOP:	
    LOOP WHILE_ 
    JMP  PRINT  	

MODIFY:
    MOV AL,ARR[BX]
	MOV MAX,AL 
	JMP TOP

PRINT:
  	LEA  DX,MSG3
    MOV  AH,9
    INT 21H
	
	MOV AL,MAX
	ADD AL,48
	MOV MAX,AL
	
	MOV AH,2
	MOV DL,MAX
	INT 21H
	
EXIT_:           
    ;DOS exit
    MOV AH, 4CH
    INT 21H
	
MAIN ENDP
     END MAIN