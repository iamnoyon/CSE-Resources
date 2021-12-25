TITLE COUNT THE NUMBER OF VOWELS ,COSONANT,DIGIT , SPACE

.MODEL SMALL
.STACK 100H
.DATA  
      MSG DB 'ENETR THE STRING : $'
	  CRLF DB 0DH,0AH,'$'
	  MGS_VOWEL DB 0DH,0AH,' THE NUMBER OF VOWELS IS :$'
	   MGS_CONST DB 0DH,0AH,' THE NUMBER OF CONSONANT IS :$'
	   MGS_WORD DB 0DH,0AH,' THE NUMBER OF WORDS IS :$'
	   MGS_DIGIT DB 0DH,0AH,' THE NUMBER OF DIGIT IS :$'
	  VOWELS DB ?
	  CONSONANTS DB ?
	  WORDS DB ?
	  DIGITS DB ?
	  
.CODE
    MAIN PROC
	     MOV AX,@DATA
		 MOV DS,AX
		 
		 MOV AH,9
		 LEA DX,MSG
		 INT 21H
		 
		 MOV VOWELS,0
		 MOV CONSONANTS,0
		 MOV WORDS,0
		 MOV DIGITS,0
		 
		 DIGIT:
		       MOV AH,1
			   INT 21H
			   CMP AL,0DH
			   JE OUT1
			   CMP AL,'0'
			   JL NON_DIGIT
			   CMP AL,'9'
			   JG NON_DIGIT
			   INC DIGITS
			   JMP DIGIT
		NON_DIGIT:
		        CMP AL,'A'
				JL NON_ALPHA
				CMP AL,'z'   ;mind here small z
				JG NON_ALPHA
				
				CMP AL,'A'
				JE VOWEL
				CMP AL,'E'
				JE VOWEL
			    CMP AL,'I'
				JE VOWEL
			    CMP AL,'O'
				JE VOWEL
			    CMP AL,'U'
				JE VOWEL
			    CMP AL,'a'
				JE VOWEL
			    CMP AL,'e'
				JE VOWEL
				CMP AL,'i'
				JE VOWEL
			    CMP AL,'o'
				JE VOWEL
			    CMP AL,'u'
				JE VOWEL
				
				INC CONSONANTS
				JMP DIGIT
		VOWEL:
		        INC VOWELS
				JMP DIGIT
		
		NON_ALPHA:
		         CMP AL,' '
				 JE WORD1
				 JMP DIGIT
		WORD1:
		      INC WORDS
			  JMP DIGIT
		
		OUT1:
		     MOV AH,9
			 LEA DX,MGS_WORD
			 INT 21H
			 
			 MOV AH,2
			 MOV DL,WORDS
			 ADD DL,49        ;mind here words=space+1
			 INT 21H
			 
			 MOV AH,9
			 LEA DX,MGS_VOWEL
			 INT 21H
			 
			 MOV AH,2
			 MOV DL,VOWELS
			 ADD DL,48
			 INT 21H
			 
			 MOV AH,9
			 LEA DX,MGS_CONST
			 INT 21H
			 
			 MOV AH,2
			 MOV DL,CONSONANTS
			 ADD DL,48
			 INT 21H
			 
			 MOV AH,9
			 LEA DX, MGS_DIGIT
			 INT 21H
			 
			 MOV AH,2
			 MOV DL,DIGITS
			 ADD DL,48
			 INT 21H
			 
			 MOV AH,4CH
			 INT 21H
	MAIN ENDP
END MAIN