NAME = libftpushswap.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f
AR = ar -rc

# ===== PATHS =====
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
BONUS_PATH = ./push_swap_bonus

# ===== TARGETS =====
TARGET = push_swap
BONUS_TARGET = checker

# ===== SOURCES =====
SRCS =	swap_and_push.c \
	rots_a_b.c \
	rotrevs_a_b.c \
	sort_stack.c \
	push_swap.c \
	parser.c \
	push_swap_utils.c \
	turk.c \
	turk_utils.c \
	index_final.c \
	list_utils.c \

BONUS_SRCS = 	$(BONUS_PATH)/checker_bonus.c \
		$(BONUS_PATH)/check_output_bonus.c \
		$(BONUS_PATH)/checker_utils_bonus.c \
		$(BONUS_PATH)/parser_bonus.c \
		$(BONUS_PATH)/rotrevs_a_b_bonus.c \
		$(BONUS_PATH)/rots_a_b_bonus.c \
		$(BONUS_PATH)/swap_and_push_bonus.c \
		$(BONUS_PATH)/get_next_line_bonus.c \
		$(BONUS_PATH)/list_utils_bonus.c \
		


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# ===== RULES =====
all: $(TARGET)

$(LIBFT):
	@make -C $(LIBFT_PATH)

$(TARGET): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBFT)

bonus: all $(BONUS_TARGET)

$(BONUS_TARGET): $(BONUS_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(BONUS_TARGET) $(BONUS_OBJS) $(LIBFT)

clean:
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJS) $(BONUS_OBJS) $(NAME)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(TARGET) $(BONUS_TARGET) $(NAME)

re: fclean all


beautiful: re
	make clean
	clear

.PHONY: all bonus clean fclean re
