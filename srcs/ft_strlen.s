	global		ft_strlen

section		.text

ft_strlen:
	mov		rax, -1

start:
	inc		rax
	cmp		byte [rdi + rax], 0
	jne		start ; branchement start si byte [rdi + rax] != 0

return:
	ret