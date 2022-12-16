#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 02:36:36 by mugurel           #+#    #+#              #
#    Updated: 2022/12/15 23:46:41 by mugurel          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c 		\
		ft_strlen.c			\
		ft_isalpha.c 		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\

BOBJS = $(BSRCS:.c=.o)
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -rf
LIBC = ar rc
OUT = ./a.out

all: ${NAME}

${NAME}: ${OBJS}
	@${LIBC} ${NAME} ${OBJS}
	@echo "Success"

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus: ${OBJS} ${BOBJS}
	${LIBC} ${NAME} ${OBJS} ${BOBJS}

clean:
	@${RM} ${OBJS} ${BOBJS}

fclean: clean
	@${RM} ${NAME}
	rm libft.so a.out


re: fclean all

.PHONY: all clean fclean re bonus

so:
	$(CC) -nostartfiles -fPIC $(C_FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

# end
