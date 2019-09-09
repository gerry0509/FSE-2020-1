	.text
	.global _start

_start:
	MOV r1,#8
	MOV r2,#40
	CMP r1,r2
	BGT R1MAYOR
	BEQ iguales
	BLT R2MAYOR

iguales: MOV r7,#4
	 MOV r0,#1
	 LDR r1,=message
	 MOV r2,#12
	 SVC #0
	 MOV r7,#1
	 MOV r0,#0
	 SVC #0
	.data

R1MAYOR:MOV r7,#4
	MOV r0,#1
	LDR r1,=message1
	MOV r2,#17
	SVC #0
	MOV r7,#1
	MOV r0,#0
	SVC #0
	.data
R2MAYOR:MOV r7,#4
	MOV r0,#1
	LDR r1,=message2
	MOV r2,#17
	SVC #0
	MOV r7,#1
	MOV r0,#0
	SVC #0
	.data

message:
	.ascii "Son iguales\n"
message1:
	.ascii "Registro 1 Mayor\n"
message2:
	.ascii "Registro 2 Mayor\n"
