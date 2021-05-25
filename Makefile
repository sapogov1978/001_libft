# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brattles <brattles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 20:25:41 by brattles          #+#    #+#              #
#    Updated: 2020/11/26 01:43:53 by brattles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	all clean fclean re
.SUFFIXES:
.SUFFIXES: .c .o .h .d

NAME 	= libft.a

FUNCTIONS	= ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_strlen.c \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_memcmp.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_memchr.c \
			  ft_memccpy.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_isalnum.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_atoi.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strncmp.c \
			  ft_strnstr.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_strmapi.c \
			  ft_itoa.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c

OBJ		= $(patsubst %.c, %.o, $(FUNCTIONS))
D_FILE  = $(patsubst %.c, %.d, $(FUNCTIONS))

CFLAGS 	= -Wall -Wextra -Werror
CC		= gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $?
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@ -MD

include $(wildcard $(D_FILE))

clean:
	rm -f $(OBJ)
	rm -f $(D_FILE)
fclean: clean
	rm -f $(NAME)
re: fclean all