       .MODEL SMALL
.STACK 100H
.DATA
    MSG1 DB 'INPUT: $'
    MSG2 DB 0DH,0AH,'Vowel:$'
    MSG3 DB 0DH,0AH,'Consonents:$'
    MSG4 DB 0DH,0AH,'Digits:$'
    MSG5 DB 0DH,0AH,'Spaces:$'
.CODE
    MAIN PROC
        AND CH,0
        AND BH,0
        AND BL,0
        AND CL,0
        
        MOV AX,@DATA
        MOV DS,AX
        
        LEA DX,MSG1
        MOV AH,9
        INT 21H
        
        MOV AH,1
    READ:
        INT 21H
        CMP AL,0DH
        JE PRINT
        
        CMP AL,32
        JE COUNTSPACES
        
        CMP AL,0
        JE COUNTDIGITS
        CMP AL,1
        JE COUNTDIGITS
        CMP AL,2
        JE COUNTDIGITS
        CMP AL,3
        JE COUNTDIGITS
        CMP AL,4
        JE COUNTDIGITS
        CMP AL,5
        JE COUNTDIGITS
        CMP AL,6
        JE COUNTDIGITS
        CMP AL,7
        JE COUNTDIGITS
        CMP AL,8
        JE COUNTDIGITS
        CMP AL,9
        JE COUNTDIGITS
        
        CMP AL,'a'
        JE COUNTVOWELS
        CMP AL,'A'
        JE COUNTVOWELS
        CMP AL,'E'
        JE COUNTVOWELS
        CMP AL,'e'
        JE COUNTVOWELS
        CMP AL,'I'
        JE COUNTVOWELS
        CMP AL,'i'
        JE COUNTVOWELS
        CMP AL,'O'
        JE COUNTVOWELS
        CMP AL,'o'
        JE COUNTVOWELS
        CMP AL,'U'
        JE COUNTVOWELS
        CMP AL,'u'
        JE COUNTVOWELS
        
        CMP AL,'B'
        JE COUNTCONSONENTS
        CMP AL,'b'
        JE COUNTCONSONENTS
        CMP AL,'C'
        JE COUNTCONSONENTS
        CMP AL,'c'
        JE COUNTCONSONENTS
        CMP AL,'D'
        JE COUNTCONSONENTS
        CMP AL,'d'
        JE COUNTCONSONENTS
        CMP AL,'F'
        JE COUNTCONSONENTS
        CMP AL,'f'
        JE COUNTCONSONENTS
        CMP AL,'G'
        JE COUNTCONSONENTS
        CMP AL,'g'
        JE COUNTCONSONENTS
        CMP AL,'H'
        JE COUNTCONSONENTS
        CMP AL,'h'
        JE COUNTCONSONENTS
        CMP AL,'J'
        JE COUNTCONSONENTS
        CMP AL,'j'
        JE COUNTCONSONENTS
        CMP AL,'K'
        JE COUNTCONSONENTS
        CMP AL,'k'
        JE COUNTCONSONENTS
        CMP AL,'L'
        JE COUNTCONSONENTS
        CMP AL,'l'
        JE COUNTCONSONENTS
        CMP AL,'M'
        JE COUNTCONSONENTS
        CMP AL,'m'
        JE COUNTCONSONENTS
        CMP AL,'N'
        JE COUNTCONSONENTS
        CMP AL,'n'
        JE COUNTCONSONENTS
        CMP AL,'P'
        JE COUNTCONSONENTS
        CMP AL,'p'
        JE COUNTCONSONENTS
        CMP AL,'Q'
        JE COUNTCONSONENTS
        CMP AL,'q'
        JE COUNTCONSONENTS
        CMP AL,'R'
        JE COUNTCONSONENTS
        CMP AL,'r'
        JE COUNTCONSONENTS
        CMP AL,'S'
        JE COUNTCONSONENTS
        CMP AL,'s'
        JE COUNTCONSONENTS
        CMP AL,'T'
        JE COUNTCONSONENTS
        CMP AL,'t'
        JE COUNTCONSONENTS
        CMP AL,'V'
        JE COUNTCONSONENTS
        CMP AL,'v'
        JE COUNTCONSONENTS
        CMP AL,'W'
        JE COUNTCONSONENTS
        CMP AL,'w'
        JE COUNTCONSONENTS
        CMP AL,'X'
        JE COUNTCONSONENTS
        CMP AL,'x'
        JE COUNTCONSONENTS
        CMP AL,'Y'
        JE COUNTCONSONENTS
        CMP AL,'y'
        JE COUNTCONSONENTS
        CMP AL,'Z'
        JE COUNTCONSONENTS
        CMP AL,'z'
        
        JMP READ
        
    COUNTSPACES:
        MOV DL,BH
        INC DL
        MOV BH,DL
        JMP READ
    COUNTDIGITS:
        MOV DL,CH
        INC DL
        MOV CH,DL
        JMP READ
    COUNTVOWELS:
        MOV DL,BL
        INC DL
        MOV BL,DL
        JMP READ
    COUNTCONSONENTS:
        MOV DL,CL
        INC DL
        MOV CL,DL
        JMP READ    
                    
        
    PRINT:
        LEA DX,MSG5
        MOV AH,9
        INT 21H
        MOV DL,BH
        MOV AH,2
        INT 21H 
        
        LEA DX,MSG4
        MOV AH,9
        INT 21H
        MOV DL,CH
        MOV AH,2
        INT 21H
        
        LEA DX,MSG2
        MOV AH,9
        INT 21H
        MOV DL,BL
        MOV AH,2
        INT 21H
        
        LEA DX,MSG3
        MOV AH,9
        INT 21H
        MOV DL,CL
        MOV AH,2
        INT 21H
        
        MOV AH,4CH
        INT 21H
 
        MAIN ENDP
    END MAIN