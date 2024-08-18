# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babischa <babischa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 14:42:15 by babischa          #+#    #+#              #
#    Updated: 2024/08/18 16:29:40 by babischa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP	:=	push_swap

CC 			:=	cc
FLAGS 		:=	-Werror -Wextra -Wall -g3

PRINTF	 	:=	./library/ft_printf
LIBFT	 	:=	./library/libft
HEADERS 	:=	-I ./include -I $(PRINTF)/include -I $(LIBFT)/include
LIB			:=	$(PRINTF)/ft_printf.a $(LIBFT)/libft.a

SRC_PUSH	:=	main \
				utils

OBJ_PUSH	:=	$(addprefix objects/, $(addsuffix .o, $(SRC_PUSH)))

all: make_libft make_printf $(PUSH_SWAP)

make_libft:
	$(MAKE) -C $(LIBFT)

make_printf:
	$(MAKE) -C $(PRINTF)

objects/%.o: source/%.c | objects
	$(CC) $(FLAGS) -o $@ -c $< $(HEADERS) ; \
	echo "Compiling: $(notdir $<)"

$(PUSH_SWAP): $(OBJ_PUSH)
	$(CC) $(OBJ_PUSH) $(LIB) $(HEADERS) -o $(PUSH_SWAP)

objects:
	mkdir -p objects

bonus: all

clean:
	$(MAKE) -C $(PRINTF) clean
	$(MAKE) -C $(LIBFT) clean
	rm -rf objects

fclean: clean
	$(MAKE) -C $(PRINTF) fclean
	$(MAKE) -C $(LIBFT) fclean
	rm -rf $(PUSH_SWAP)

re: fclean all

.PHONY: all clean fclean re make_printf make_libft objects bonus

.SILENT:
