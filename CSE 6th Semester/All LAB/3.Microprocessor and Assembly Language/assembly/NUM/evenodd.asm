.MODEL SMALL
.STACK 100H
.DATA
   CR EQU 0DH
   LF EQU 0AH
MSG1   DB  'ENTER N(0-9): $'
MSG2   DB  CR,LF, 'STATUS: EVEN$'
MSG3   DB  CR,LF, 'STATUS: ODD$'
     
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
	
	TEST AL,1
	JZ EVEN_ 
	LEA  DX,MSG3	    
    JMP PRINT
	
EVEN_:   
    LEA  DX,MSG2	
      	
PRINT:	
    MOV  AH,9
    INT 21H
	
EXIT_:           
    ;DOS exit
    MOV AH, 4CH
    INT 21H
	
MAIN ENDP
     END MAIN
	 
	 