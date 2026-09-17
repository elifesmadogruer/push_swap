NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRCS =main.c utils.c operations/pa.c operations/pb.c operations/ra.c operations/rb.c operations/rr.c operations/rra.c operations/rrb.c operations/rrr.c operations/sa.c operations/sb.c operations/ss.c
OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re