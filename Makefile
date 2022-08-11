NAME = libftprintf.a

PATH_SRCS = ./src/
PATH_OBJS = ./objects/
PATH_INCLUDES = ./includes/ft_printf.h

CFLAGS = -Wall -Wextra -Werror

SRCS = 	$(addprefix $(PATH_SRCS),\
			ft_printf.c\
			ft_flags.c \
			ft_format_c.c \
			ft_format_id.c \
			ft_format_p.c\
			ft_format_s.c\
			ft_format_xu.c\
			ft_printf_utils.c)

OBJS = $(SRCS:.c=.o)

CLEAN = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) $(INCLUDES)

$(PATH_SRC)%.o: $(PATH_SRC)%.c $(INCLUDES)
		@ cc $(CFLAGS) -c $< -o $@

clean:
	$(CLEAN) $(OBJS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re