	global		ft_write
	extern 		__errno_location
	
section		.text

ft_write:
	mov 	rax, 1  ; sys_write
    syscall     ; call write
	cmp		rax, 0
	jl 		error
	ret

error:
	neg		rax ; get absolute value of syscall return
	mov		rdx, rax 
	call 	__errno_location
	mov		[rax], rdx ; [] valeur stockée dans rax
	mov		rax, -1
	ret