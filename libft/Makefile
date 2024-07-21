# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raphael <raphael@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 21:06:16 by raphael           #+#    #+#              #
#    Updated: 2024/07/21 02:14:31 by raphael          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

FILES = ft_isalpha \
        ft_isdigit \
        ft_isalnum \
        ft_isprint \
        ft_isascii \
        ft_strlen \
        ft_memset \
        ft_bzero \
        ft_memcpy \
        ft_memmove \
        ft_strlcpy \
        ft_strlcat \
        ft_toupper \
        ft_tolower \
        ft_strchr \
        ft_strrchr \
        ft_strncmp \
        ft_memchr \
        ft_memcmp \
        ft_strnstr \
        ft_atoi \
        ft_calloc \
        ft_strdup

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

%.o: %.c
	@echo "Compiling $< -> $@"
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@echo "Creating library $@"
	$(AR) $@ $^

all: $(NAME)

clean:
	@echo "Cleaning objects"
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning library"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re