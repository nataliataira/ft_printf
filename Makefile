NAME = libftprintf.a

SRC = 

OBJS = $(SRC:.c =.o)

CFLAGS = $(-Wall -Wextra -Werror)

CLEAN = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	cc $(CFLAGS) -c $(SRC)

clean:
	$(CLEAN) $(OBJS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re