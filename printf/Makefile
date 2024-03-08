NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SOURCE = ft_printf.c ft_printChar.c ft_printDigit.c ft_printHex.c ft_printString.c ft_printUnsigDigit.c

OBJS = $(SOURCE:.c=.o)

$(NAME) : $(OBJS)
		@ar -crs $(NAME) $(OBJS)

all : $(NAME)

clean : 
		@rm -f $(OBJS)

fclean : clean
		@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re