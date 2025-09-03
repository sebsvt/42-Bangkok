# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuksarn <smuksarn@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 02:09:09 by smuksarn          #+#    #+#              #
#    Updated: 2025/09/03 02:55:21 by smuksarn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isascii.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_atoi.c \
      ft_strlen.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
