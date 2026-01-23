# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarfreit <sarfreit@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/31 03:56:38 by sarfreit          #+#    #+#              #
#    Updated: 2025/08/31 03:56:38 by sarfreit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --------------------------------------------------------------------------- #
# Compiler and flags
# --------------------------------------------------------------------------- #
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror
INCS    := -I . -I libft -I ft_printf

# --------------------------------------------------------------------------- #
# Library name
# --------------------------------------------------------------------------- #
NAME    := push_swap

LIBFT_DIR  := libft
LIBFT_A    := $(LIBFT_DIR)/libft.a

PRINTF_DIR := ft_printf
PRINTF_A   := $(PRINTF_DIR)/ftprintf.a

# --------------------------------------------------------------------------- #
# Mandatory part sources
# --------------------------------------------------------------------------- #
SRCS    := error_checker.c \
		   helper_functions.c \
           main.c \
           move_operations.c \
           parse_args.c \
		   print_operations.c \
		   stack_pos.c \
		   stack_sort.c \
		   stack_utils.c

OBJS    := $(SRCS:.c=.o)

# --------------------------------------------------------------------------- #
# Rules
# --------------------------------------------------------------------------- #

all: $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF_A):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJS) $(LIBFT_A) $(PRINTF_A)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) $(PRINTF_A) -o $(NAME)

# --------------------------------------------------------------------------- #
# Generic compile rule
# --------------------------------------------------------------------------- #
%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

# --------------------------------------------------------------------------- #
# Clean rules
# --------------------------------------------------------------------------- #
clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean


re: fclean all

# --------------------------------------------------------------------------- #
.PHONY: all clean fclean re
