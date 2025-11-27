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

RESET       = \033[0m

# Regular Colors
BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
WHITE       = \033[0;37m

# Bold
B_BLACK     = \033[1;30m
B_RED       = \033[1;31m
B_GREEN     = \033[1;32m
B_YELLOW    = \033[1;33m
B_BLUE      = \033[1;34m
B_MAGENTA   = \033[1;35m
B_CYAN      = \033[1;36m
B_WHITE     = \033[1;37m

# Underline
U_BLACK     = \033[4;30m
U_RED       = \033[4;31m
U_GREEN     = \033[4;32m
U_YELLOW    = \033[4;33m
U_BLUE      = \033[4;34m
U_MAGENTA   = \033[4;35m
U_CYAN      = \033[4;36m
U_WHITE     = \033[4;37m

# Background
BG_BLACK    = \033[40m
BG_RED      = \033[41m
BG_GREEN    = \033[42m
BG_YELLOW   = \033[43m
BG_BLUE     = \033[44m
BG_MAGENTA  = \033[45m
BG_CYAN     = \033[46m
BG_WHITE    = \033[47m

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
all: $(NAME) banner

banner :
	@echo "$(BLUE)██████$(MAGENTA)╗ $(BLUE)██$(MAGENTA)╗   $(BLUE)██$(MAGENTA)╗$(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)╗  $(BLUE)██$(MAGENTA)╗    $(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)╗    $(BLUE)██$(MAGENTA)╗ $(BLUE)█████$(MAGENTA)╗ $(BLUE)██████$(MAGENTA)╗ $(NC)"
	@echo "$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔════╝$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║    $(BLUE)██$(MAGENTA)╔════╝$(BLUE)██$(MAGENTA)║    $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)╗$(NC)"
	@echo "$(BLUE)██████$(MAGENTA)╔╝$(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║$(BLUE)███████$(MAGENTA)╗$(BLUE)███████$(MAGENTA)║    $(BLUE)███████$(MAGENTA)╗$(BLUE)██$(MAGENTA)║ $(BLUE)█$(MAGENTA)╗ $(BLUE)██$(MAGENTA)║$(BLUE)███████$(MAGENTA)║$(BLUE)██████$(MAGENTA)╔╝$(NC)"
	@echo "$(BLUE)██$(MAGENTA)╔═══╝ $(BLUE)██$(MAGENTA)║   $(BLUE)██$(MAGENTA)║╚════$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)║    ╚════$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)║$(BLUE)███$(MAGENTA)╗$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔══$(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)╔═══╝ $(NC)"
	@echo "$(BLUE)██$(MAGENTA)║     ╚$(BLUE)██████$(MAGENTA)╔╝$(BLUE)███████$(MAGENTA)║$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║    $(BLUE)███████$(MAGENTA)║╚$(BLUE)███$(MAGENTA)╔$(BLUE)███$(MAGENTA)╔╝$(BLUE)██$(MAGENTA)║  $(BLUE)██$(MAGENTA)║$(BLUE)██$(MAGENTA)║    $(NC)" 
	@echo "$(MAGENTA)╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     $(NC)"
                                                                       

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)Compilation finished$(NC)"

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)Object clean !!$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Program deleted !!$(NC)"

re: fclean all

# ---- TEST RULE ----
test: $(NAME)
	@echo "Running tests..."
	@for t in $(TEST); do \
	    echo "\nTest: $$t"; \
	    ./$(NAME) $$t; \
	done

.PHONY: all clean fclean re test banner
