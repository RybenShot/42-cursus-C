# Nombre del programa 
NAME = libft.a

# Flags que usara a la hora de compilar las funciones
CFLAGS = -Wall -Wextra -Werror

# comando de compilacion
CC = gcc

# todas la funciones que queremos compilar
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SOUCERS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# conversor de las funciones *.c a objeto *.o con el flag -c
# funcion que hace pasar a objeto cada funcion
OBJS = $(SOURCES:.c=.o)

BONUS_OBJS = $(BONUS_SOURCES:.c=.o)

# aaqui estara la cabecera de los ejercicios, asi no los tiene que poner en los propios ejercicios
# HEADER = libft.h

#compilara las funciones y creará las biblioteca con "ar"
#(c create, r replace, s make #index).
$(NAME) : $(OBJS)
		@ar -crs $(NAME) $(OBJS)

# cuando hagas "make" o "make all" se llevara a cabocd estas instrucciones
all : $(NAME)

#Borra todos los *.o ficheros creados en el proceso
clean :
		@rm -f $(OBJS)
		@rm -f $(BONUS_OBJS)

# Primero borrara todos los ficheros *.o y luego borrara el programa
fclean : clean
		@rm -f $(NAME)

# Borrara todos los ficheros *.o , el programa y al final empezara a ejecutar la compilacion de el programa de nuevo
re : fclean all

bonus: $(BONUS_OBJS)
		ar -crs $(NAME) $(BONUS_OBJS)

# Esto es para indicarle a "make" que se han proporcionado instrucciones especificas para estos comandos
.PHONY : all clean fclean re bonus