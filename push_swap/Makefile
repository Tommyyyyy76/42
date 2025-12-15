NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = indexoftab.c main.c push.c radixsort.c rotate.c rotatetwo.c sortthreefive.c swap.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
