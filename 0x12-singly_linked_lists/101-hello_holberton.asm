		global	main
		extern	printf

		section	.text
main:
		mov 	rdi, formart
		mov 	rax, 0
		call 	printf
		mov 	rax, 0
		ret
formart:
		db "Hello, Holberton", 10, 0
