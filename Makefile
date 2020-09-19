NAME	= libasm.a

LOCA2	= ./includes/

SRCS	= 	./srcs/ft_strlen.s \
			./srcs/ft_strcpy.s \
			./srcs/ft_strdup.s \
			./srcs/ft_read.s \
			./srcs/ft_write.s \
			./srcs/ft_strcmp.s \

OBJS	= ${SRCS:.s=.o}

RM		= rm -f

AR		= ar -rcs

${CC}	= gcc

NASM = nasm -felf64

CFLAGS	= -Wall -Wextra -Werror

.s.o:
	nasm -felf64 $< -o $@

${NAME}: 	${OBJS} 
		${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${NAME} ${OBJS}

fclean :	clean

re:		fclean all

.PHONY:		all clean fclean re
