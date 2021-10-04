# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgutin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 14:40:48 by dgutin            #+#    #+#              #
#    Updated: 2021/10/04 14:48:04 by dgutin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c \
			  ft_toutlerestelatmtc
	
OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

LIBFT		= lifbt/

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	@make all -c $(LIBFT)
	ar -rcs $@ $^

.c.o:
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

all:		${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
