NAME		=		cub3D

SRCS		=		SRCS/*.c

LIBFT 		= 		./mylibft/libft.a

INCLUDE = -I ./mylibft/libft.h -I ./include/cub3D.h -I /usr/local/include

GCC = gcc -Wall -Wextra -Werror -c $(SRCS) 
MLX = -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit

all:

	make -C mylibft
	$(GCC) $(INCLUDE) $(SRCS) $(LIBFT) -o $(NAME)

clean:


fclean: clean

re: fclean all