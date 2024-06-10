NAME = exe24
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
LIBRARY = libft.a
SRC = 
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)

