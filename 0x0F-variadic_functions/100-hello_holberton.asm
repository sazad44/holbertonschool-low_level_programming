          global    main

	          section   .text
main:				; This is called by the C library startup code
	          mov       	rax, 1 ; First integer (or pointer) argument in rdi
	          mov		rdi, 1; puts(message)
	          mov		rsi, message ; Return from main back into C library wrapper
		  mov rdx, 17
		  syscall
		  mov rax ,60
		  xor rdi, rdi
		  syscall
		section .data
message:
	          db        "Hello, Holberton", 10 ; Note strings must be terminated with 0 in C
