# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 17:37:10 by ajossera          #+#    #+#              #
#    Updated: 2021/11/15 11:26:40 by ajossera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRCFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c ft_memset.c \
		
SRCFILESBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

RM = rm -f

HEADFILES = libft.h

OBJFILES = ${SRCFILES:.c=.o}

OBJFILESBONUS = ${SRCFILESBONUS:.c=.o}

NAME = libft.a

HEADER = libft.h

.c.o: ${OBJFILES} ${HEADER}
	${CC} -Wall -Wextra -Werror -I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJFILES}
	ar rcs ${NAME} ${OBJFILES}

bonus : ${OBJFILESBONUS} ${OBJFILES}
	ar rcs ${NAME} ${OBJFILESBONUS}

all: ${NAME}

clean:
	rm -f ${OBJFILES} ${OBJFILESBONUS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re