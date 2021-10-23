NAME	= libft.a

SRC	= libft/ft_atoi.c 
		libft/ft_bzero.c 
		libfdt/ft_calloc.c 
		libft/ft_isalnum.c
		libft/ft_isalpha.c
		libft/fdt_isascii.c
		libft/ft_isdigit.c
		libft/ft_isprint.c
		libft/ft_memchr.c
		libft/ft_memcmp.c
		libft/ft_memcpy.c
		libft/ft_memmove.c
		libft/ft_memset.c
		libft/ft_strchr.c
		libft/ft_strdup.c
		libft/ft_strjoin.c
		libft/ft_strlcat.c
		libft/ft_strlcpy.c
		libft/ft_strlen.c
		libft/ft_strncmp.c
		libft/ft_strnstr.c
		libft/ft_strrchr.c
		libft/ft_substr.c
		libft/ft_tolowerr.c
		libft/ft_toupper.c
CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

AR	= ar

ARFLAGS	= rcs

OBJS	= ${SRC:.c=.o}

RM	= rm -f

.c.o:
			${CC} -I includes ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${ARFLAGS} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
