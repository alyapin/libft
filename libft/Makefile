# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzina <kzina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 21:55:53 by kzina             #+#    #+#              #
#    Updated: 2019/09/18 20:16:21 by kzina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
C= -g -Wall -Werror -Wextra -I. -c
A=ar rc
R=ranlib
SRC= ft_abs.c\
	ft_atoi.c\
	ft_atoi_base.c\
	ft_bzero.c\
	ft_count_words_split.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_isspace.c\
	ft_itoa.c\
	ft_lstadd.c\
	ft_lstdel.c\
	ft_lstdelone.c\
	ft_lstfind.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_lstmerge.c\
	ft_lstnew.c\
	ft_memalloc.c\
	ft_memccpy.c \
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memdel.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putchar.c\
	ft_putendl_fd.c\
	ft_putendl.c\
	ft_putnbr_fd.c\
	ft_putnbr.c\
	ft_putstr_fd.c\
	ft_putstr.c\
	ft_strcat.c\
	ft_strchr.c\
	ft_strclr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdel.c\
	ft_strdup.c\
	ft_strequ.c\
	ft_strnew.c \
	ft_striter.c\
	ft_striteri.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strnequ.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strsplit.c\
	ft_strstr.c\
	ft_strsub.c\
	ft_strtrim.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_lstcount.c\
	ft_lstrev.c\
	ft_strarraydel.c\
	ft_rgb.c\
	get_next_line.c\

OBJ= $(SRC:.c=.o)

GREEN= \033[0;32m
RED= \033[0;031m
RESET= \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\n$(NAME): $(GREEN)object files were created $(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJ): $(SRC)
	@gcc $(C) $(SRC)

clean:
	@/bin/rm -rf $(OBJ)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"


fclean: clean 
	@rm -rf $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re: 
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: clean fclean all re
