LIBFT = libft/libft.a

CFLAGS = gcc -Wall -Wextra -Werror -o

CC = gcc

NAME = checker

NAME2 = push_swap

SRCS =	check_src/checker.c\
		check_src/operators.c\
		check_src/operators2.c\
		check_src/pre_checks.c\

SRCS2 = Push_src/push_swap.c\
		Push_src/operators.c\
		Push_src/pre_checks.c\
		Push_src/sorters.c\
		Push_src/potential_sorters.c\
		Push_src/oi_operators.c\
		Push_src/new_sorter.c\
		Push_src/insert_sort_optimised.c\
		Push_src/one_twos.c\
		Push_src/one-twos-1.c\
		Push_src/big.c\
		Push_src/100_sort.c\
		Push_src/stack_string.c\


all:$(NAME) $(NAME2)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRCS) -L libft/ -lft

$(NAME2):
	$(CFLAGS) $(NAME2) $(SRCS2) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME2)
	@$(MAKE) -C libft/ fclean

re: fclean all
