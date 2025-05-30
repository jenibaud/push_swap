CFLAGS = -g -Wall -Wextra -Werror

NAME = push_swap
MAKE = make --no-print-directory

OBJS = $(SRCS:.c=.o)

#-------------------------------------------------------SRCS----------------------------------------------------#

PRINTF_PATH = srcs/ft_printf
PRINTF = $(PRINTF_PATH)/libftprintf.a

LIBFT_PATH = srcs/Libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS =	main.c\
		move.c\
		sort.c\
		utils.c\
		check_nbrs.c

#-----------------------------------------------------RULES-----------------------------------------------#

all: $(NAME)

$(PRINTF):
	$(MAKE) -C $(PRINTF_PATH)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(MAKE) -C $(PRINTF_PATH) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(PRINTF_PATH) fclean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re : fclean all