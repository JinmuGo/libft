# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 12:56:36 by jgo               #+#    #+#              #
#    Updated: 2022/08/22 17:40:39 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c 

BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

ifndef WITH_BONUS
	OBJECT = $(OBJS)
else
	OBJECT = $(OBJS) $(BONUS_OBJS)
endif

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	ar -rcs $@ $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus:
	make WITH_BONUS=1 all

.PHONY: all bonus clean fclean re
