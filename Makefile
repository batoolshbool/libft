NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =
OBJS = %(src: .c=.o)

all:

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re
