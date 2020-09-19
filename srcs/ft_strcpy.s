	global		ft_strcpy

section		.text

ft_strcpy:
	mov	rcx, 0 ; rcx -> registre compteur


increm:
	mov		al, byte [rsi + rcx] ; partie basse 8 bit, peut contenir 1 octet
	mov		byte[rdi + rcx], al ; al = 1 octet pas besoin de plus
	inc		rcx

start:
	cmp		byte [rsi + rcx], 0 ; test si \0
	jne		increm; si cmp != 0 jump a increm;
	mov		al, byte [rsi + rcx] ; rsi registre general, adresse source pour d´eplacement ou comparaison ; ajout de /0
	mov		byte[rdi + rcx], al ;  rdi registre general, adresse source pour d´eplacement ou comparaison

return:
	mov		rax, rdi ; met rdi dans rax
	ret ;  return
