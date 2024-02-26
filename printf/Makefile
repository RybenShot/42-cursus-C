# Nombre del programa
NAME = printf.a

# Las banderas con las que compilaremos las funciones
CFLAGS = -Wall -Wextra -Werror

# Comando para compilar las funciones
CC =gcc

# Los archivos de las funciones que albergara
SOURCE = ft_printf.c ft_printChar.c ft_printDigit.c ft_printHex.c ft_printString.c ft_printUnsigDigit.c

# Para crear la biblioteca, convierte las funciones (*.c) en objetos (*.o)
OBJS = $(SOURCE: .c = .o)

#compilara las funciones y creará las biblioteca con "ar"
#(c create, r replace, s make #index).
$(NAME) : $(OBJS)
		@ar -crs $(NAME) $(OBJS)

# Cuando ingresas "make" o "make all", se ejecutaran estas instrucciones.
all: $(NAME)

#Borra todos los *.o ficheros creados en el proceso
clean: 
		@rm -f $(OBJS)

# Primero borrara todos los ficheros *.o y luego borrara el programa
fclean: clean
		@rm -f $(NAME)

# Borrara todos los ficheros *.o , el programa y al final empezara a ejecutar la compilacion de el programa de nuevo (actualizacion)
re: flcean all

# Esto es para indicarle a "make" que se han proporcionado instrucciones especificas para estos comandos
.PHONY: all clean fclean re