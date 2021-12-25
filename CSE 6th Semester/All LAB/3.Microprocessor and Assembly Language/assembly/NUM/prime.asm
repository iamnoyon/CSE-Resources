
.MODEL SMALL
.STACK 100H
.DATA
   CR EQU 0DH
   LF EQU 0AH
MSG1   DB  'ENTER N(0-9): $'
MSG2   DB  CR,LF, 'STATUS: NOT PRIME$'
MSG3   DB  CR,LF, 'STATUS: PRIME$'

   N   DB  0     ; input number
 
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
	
	; set AX=BX=CX=0
	XOR AX,AX
	XOR CX,CX
	XOR BX,BX
	
	MOV CL,N
	
	MOV BL,2          ; BL is eqivalent to c (see example code) 
    SUB CL,BL         ; CL for counting 
	
	MOV AL,N          
	CMP AL,0          ; if N==0 then not prime 
	JE  NOT_PRIME
	CMP AL,1          ; if N==1 then not prime  
	JE  NOT_PRIME
	
	JCXZ PRIME        ; if N==2 then prime  
	
FOR_:
    XOR AX,AX         ; set AX=0      
	MOV AL,N          ; set Dividend to AL 
	DIV BL            ; divide AX/N  
	CMP AH,0
	JE  NOT_PRIME
	INC BL
    LOOP FOR_ 

    CMP BL,N          ; if(c==N)  then prime //see example code 
    JE PRIME 	   	
	
NOT_PRIME:
    LEA DX,MSG2       
    JMP PRINT_MSG
	
PRIME:
    LEA DX,MSG3
           
PRINT_MSG:
    MOV  AH,9
    INT 21H
	
EXIT_:           
    ;DOS exit
    MOV AH, 4CH
    INT 21H
	
MAIN ENDP
     END MAIN


