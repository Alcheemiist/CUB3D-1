NAME		=		cub3D

SRCS		=		*/*.c */*/*.c

OBJS		=		*.o

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror -c $(SRCS)
	gcc $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

bonus: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re