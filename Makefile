# **************************************************************************** #
#                                   Makefile                                   #
# **************************************************************************** #

# ---- COMPILATION ----
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -g -I ./

# ---- DIRECTORIES ----
SRC_DIR := src
LIBFT_DIR := $(SRC_DIR)/libft
LST_DIR := $(SRC_DIR)/lst
PARSING_DIR := $(SRC_DIR)/parsing
CMD_DIR := $(SRC_DIR)/push_swap_command

# ---- SOURCES ----
SRC := \
    $(SRC_DIR)/main.c \
    $(SRC_DIR)/ft_create_node.c \
    $(SRC_DIR)/ft_create_stack.c \
    $(SRC_DIR)/ft_free_stack.c \
    $(LIBFT_DIR)/ft_atoi.c \
    $(LIBFT_DIR)/ft_split.c \
    $(LIBFT_DIR)/ft_strdup.c \
    $(LIBFT_DIR)/ft_strjoin.c \
    $(LIBFT_DIR)/ft_strlen.c \
    $(LST_DIR)/ft_lstadd_back.c \
    $(LST_DIR)/ft_lstadd_front.c \
    $(LST_DIR)/ft_lstlast.c \
    $(LST_DIR)/ft_lstsize.c \
	$(CMD_DIR)/rotate.c \
    $(CMD_DIR)/reverse_rotate.c \
    $(CMD_DIR)/push.c \
    $(CMD_DIR)/swap.c \
    $(PARSING_DIR)/ft_parsing.c \
    $(PARSING_DIR)/ft_verif_num.c \
    $(PARSING_DIR)/ft_verif_max.c \
    $(PARSING_DIR)/ft_verif_same.c

OBJ := $(SRC:.c=.o)

# ---- EXECUTABLE ----
NAME := push_swap

# ---- TESTS ----
# Place your tests here:
# Format: TEST += "1 2 3 4" (each test is a string)
TEST :=
TEST += "3 3 2 1"
TEST += "3 3- 2 1"
TEST += "3 -3 2 1"
TEST += "3 2 1"
TEST += "5 1 4 2 3"
# Add as many TEST += "..." as you want

# ---- RULES ----
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# ---- TEST RULE ----
test: $(NAME)
	@echo "Running tests..."
	@for t in $(TEST); do \
	    echo "\nTest: $$t"; \
	    ./$(NAME) $$t; \
	done

.PHONY: all clean fclean re test
