
	global		ft_read
	extern		__errno_location

section 	.text

ft_read:
	mov 	rax, 0 ; sys read
	syscall		; call read
	cmp		rax, 0
	jl		error
	ret

error:
	neg		rax ; get absolute value of syscall return
	mov		rdx, rax
	call	__errno_location
	mov		[rax], rdx
	mov		rax, -1
	ret