NAME = libft.a 

SRCS = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
 ft_strlen.c ft_strcat.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re