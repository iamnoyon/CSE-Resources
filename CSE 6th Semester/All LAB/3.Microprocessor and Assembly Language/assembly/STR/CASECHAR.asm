TITLE CASECHAR:CASE CONVERSATION PROGRAM FOR_ CHARACTER
.MODEL SMALL
.STACK 100H
.DATA
   CR EQU 0DH ; CARRIAGE RETURN
   LF EQU OAH  ; LINE FEED    
   MGS1 DB 'ENTER A LETTER : $ '
   MGS2 DB  0DH,0AH,'THE CASE_CONVERTED RESULT IS   :'
   CHAR DB ?,'$'   
 .CODE
 MAIN PROC
        ;INITIALIZE DS
 MOV AX,@DATA  ;GET DATA SEGMENT
 MOV DS,AX

LEA DX,MGS1 ;get 1st message
MOV AH , 9  ;string display   function
INT 21H

;             input a char
MOV AH,1
INT 21H

CMP AL,5AH
JA LOWER
ADD AL,20H
MOV CHAR ,AL
JMP PRINT

LOWER :
SUB AL,20H
MOV CHAR ,AL
JMP PRINT


PRINT:  
      LEA DX,MGS2 
      MOV AH , 9  ;string display   function
      INT 21H 
	
	 
      MOV AH,4CH
      INT 21H	  
	  
MAIN ENDP
    	END MAIN  