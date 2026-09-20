CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
LIBFT = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)


all: $(LIBFT)

$(LIBFT): $(OBJ)
	$(AR) $(LIBFT) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBFT)

.PHONY: fclean clean
