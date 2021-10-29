# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 23:56:53 by seozcan           #+#    #+#              #
#    Updated: 2021/10/29 21:37:26 by seozcan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c\
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -c

AR	= ar

ARFLAGS	= rcs

OBJS	= ${SRCS:%.c=%.o}

RM	= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${ARFLAGS} ${NAME} ${OBJS}

${OBJS}:	$(SRCS)
			$(CC) $(CFLAGS) $(SRCS)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
