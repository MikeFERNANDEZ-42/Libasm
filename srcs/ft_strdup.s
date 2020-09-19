	global		ft_strdup
	extern		ft_strlen
	extern		ft_strcpy
	extern		malloc

section		.text

ft_strdup:
	call	ft_strlen
	push	rdi ; conserve la chaine en entrée
	inc		rax
	mov		rdi, rax
	call	malloc
	test	eax, eax
	jz		error
	pop		rdi
	mov		rsi, rdi
	mov		rdi, rax
	call	ft_strcpy
	ret

error:
	mov	rax, 0
	pop	rdi
	ret