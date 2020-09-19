	global	ft_strcmp

section	.text

ft_strcmp:
	mov		rcx, -1

start:
	inc		rcx
	mov 	al, [rdi + rcx] ; al peut contenir 1 octet
	cmp 	al, 0
	je		neg ; va a neg si al = '\0'
	cmp		byte[rsi + rcx], 0
	je		pos
	cmp		al, [rsi + rcx]
	je 		start
	jg 		pos
	jnge		neg

pos:
	mov 	rax, 1
	ret

neg:
	cmp		byte[rsi + rcx], 0
	je		return
	mov 	rax, -1
	ret

return:
	mov 	rax, 0
	ret
