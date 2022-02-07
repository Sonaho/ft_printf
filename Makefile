SRCS	= ft_printf.c \
		source/ft_managerargs.c \
		source/ft_printchar.c \
		source/ft_printint.c \
		source/ft_printstr.c \
		source/ft_printhexa.c \
		source/ft_printpointer.c \
		source/ft_printunsigned.c \
		source/ft_initialize.c

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Werror -Wextra

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

AR		= ar rc

all:	${NAME}

${NAME}:${OBJS}
		(cd libft; make all)
		cp libft/libft.a ${NAME}
		${AR} ${NAME} ${OBJS}	

clean: 
		(cd libft; make clean)
		${RM} ${OBJS}

fclean:	clean
		(cd libft; make fclean)
		${RM} ${NAME}

re: fclean ${NAME}
