_END="\033[0m"
_RED="\033[0;31m"
_GREEN="\033[0;32m"
_YELLOW="\033[0;33m"
_CYAN="\033[0;36m"

OBJ_DIR = obj/
SRC_DIR = src/

CC = clang
CFLAGS = -Wall -Werror -Wextra
INC = -Iinclude -Imlx
LIB = -Lmlx -lmlx -lXext -lX11 -lm -lz -g
SRC = src/main.c
OBJ = $(notdir $(SRC:.c=.o))

NAME = materials

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(_GREEN)Compiling $(OBJ)...$(END)
	@$(CC) $(CFLAGS) $(OBJ) -o $@ $(LIB)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@echo $(_CYAN)Compiling $<...$(END)
	@$(CC) $(CFLAGS) -o $(OBJ_DIR)$@ -c $(SRC_DIR)$<  $(INC)

clean:
	@echo $(_YELLOW)Cleaning $(OBJ)...$(END)
	@rm -f $(OBJ)

fclean: clean
	@echo $(_RED)Cleaning $(NAME)...$(END)
	@rm -f $(NAME)

re: fclean all