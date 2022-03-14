# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgutin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 14:40:48 by dgutin            #+#    #+#              #
#    Updated: 2022/03/14 17:58:19 by dgutin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c \
			  ft_conv_select.c 

NAME		= libftprintf.a

OBJS		= ${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJS) libft/
		$(MAKE) -C libft/
		cp libft/libft.a .
		mv libft.a $(NAME)
		ar -rcs $(NAME) $(OBJS)

.c.o:
	${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}
		

all:		${NAME}

clean:
	rm -f $(OBJS) all
	$(MAKE) clean -C libft/

fclean: clean
	rm -f $(NAME) all
	$(MAKE) fclean -C libft/

re: fclean all

.PHONY: all clean fclean re bonus
