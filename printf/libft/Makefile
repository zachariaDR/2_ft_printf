NAME = libft.a

SOURCES = \
	ft_strlen.c  ft_strchr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c 

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -crs

$(NAME): $(OBJECTS)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
.SECONDARY: $(OBJECTS)
