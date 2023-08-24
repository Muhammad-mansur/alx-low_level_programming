	segment	.data
	output	db	"Hello, Holberton"
	line	db	"", 	0xa
	segment	.text
	global	main	

main:
	mov	rax,	1
	mov 	rdi,	1
	mov 	rsi, 	output
	mov	rdx, 	16
	syscall

	mov	rax,	1
	mov 	rdi,	1
	mov 	rsi,	line
	mov	rdx,	1
	syscall

	mov 	rax, 	60
	xor	rdi, 	rdi
	syscall
