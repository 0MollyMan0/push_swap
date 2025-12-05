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
STACK_DIR := $(SRC_DIR)/stack
ALGO_DIR := $(SRC_DIR)/algo

# Regular Colors
RESET       = \033[0m
BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
WHITE       = \033[0;37m

# ---- SOURCES ----
SRC := \
    $(SRC_DIR)/main.c \
    $(STACK_DIR)/ft_create_node.c \
    $(STACK_DIR)/ft_create_stack.c \
    $(STACK_DIR)/ft_free_stack.c \
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
    $(ALGO_DIR)/ft_indexation.c \
    $(ALGO_DIR)/ft_bring_top.c \
    $(ALGO_DIR)/ft_sort_small.c \
    $(ALGO_DIR)/ft_chunking.c \
    $(ALGO_DIR)/ft_free_chunk.c \
    $(ALGO_DIR)/ft_sort.c \
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
TEST += "5 1 4 2 3"
TEST += "12 34 45 56 67 43 312 98 9 23 52 2 25" 
# Add as many TEST += "..." as you want

# ---- RULES ----
all: $(NAME) banner

banner :
	@echo "$(BLUE)██████$(MAGENTA)╗ $(BLUE)██$(MAGENTA)╗   $(BLUE)██$(MAGENTA)╗$(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)╗  $(BLUE)██$(MAGENTA)╗    $(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)╗    $(BLUE)██$(MAGENTA)╗ $(BLUE)█████$(MAGENTA)╗ $(BLUE)██████$(MAGENTA)╗ $(NC)"
	@echo "$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔════╝$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║    $(BLUE)██$(MAGENTA)╔════╝$(BLUE)██$(MAGENTA)║    $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(NC)"
	@echo "$(BLUE)██████$(MAGENTA)╔╝$(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║$(BLUE)███████$(MAGENTA)╗$(BLUE)███████$(MAGENTA)║    $(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)║ $(BLUE)█$(MAGENTA)╗ $(BLUE)██$(MAGENTA)║$(BLUE)███████$(MAGENTA)║$(BLUE)██████$(MAGENTA)╔╝$(NC)"
	@echo "$(BLUE)██$(MAGENTA)╔═══╝ $(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║╚════$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)║    ╚════$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)║$(BLUE)███$(MAGENTA)╗$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔═══╝ $(NC)"
	@echo "$(BLUE)██$(MAGENTA)║     ╚$(BLUE)██████$(MAGENTA)╔╝$(BLUE)███████$(MAGENTA)║$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║    $(BLUE)███████$(MAGENTA)║╚$(BLUE)███$(MAGENTA)╔$(BLUE)███$(MAGENTA)╔╝$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)║    $(NC)" 
	@echo "$(MAGENTA)╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     $(NC)"
                                                                       

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ -lm
	@echo "$(GREEN)Compilation finished$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Object clean !!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Program deleted !!$(RESET)"

re: fclean all

# ---- TEST RULE ----
test: $(NAME)
	@echo "Running tests..."
	@for t in $(TEST); do \
	    echo "\nTest: $$t"; \
	    ./$(NAME) $$t; \
	done

.PHONY: all clean fclean re test banner
