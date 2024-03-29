#include "ft_printf.h"

/* Programa de pruebas */
void main (){
    int number = 3;
    char letter = 'Z';
    char word[] = "palabra";

    int counter1 = ft_printf("print %p\n", number);
    int counter2 = printf("print %p\n", number);
    printf("\nel original %d y el mio %d", counter2, counter1 );

    char	*str;

	str = "Hola! :)";
	printf("original de c: %c \n", 'D');
	ft_printf("Prueba de c: %c \n", 'D');

	printf("original de s: %s \n", str);
	ft_printf("Prueba de s: %s \n", str);

	printf("original de p: %p \n", str);
	ft_printf("Prueba de p: %p \n", str);

	printf("original de d: %d \n", 500);
	ft_printf("Prueba de d: %d \n", 500);

	printf("original de i: %i \n", 33565);
	ft_printf("Prueba de i: %i \n", 33565);

	printf("original de u: %u \n", 986757);
	ft_printf("Prueba de u: %u \n \n", 986757);

	printf("original de x: %x \n", 0x73);
	ft_printf("Prueba de x: %x \n \n", 0x73);
	printf("original de x: %x \n", 16);
	ft_printf("Prueba de x: %x \n \n", 16);
	printf("original de x: %x \n", -101);
	ft_printf("Prueba de x: %x \n \n", -101);
	printf("original de x: %x \n", 2147483647);
	ft_printf("Prueba de x: %x \n \n", 2147483647);
	printf("original de x: %x \n", 99);
	ft_printf("Prueba de x: %x \n \n", 99);
	printf("original de x: %x \n", -11);
	ft_printf("Prueba de x: %x \n \n", -11);

    printf("original de %%: %% \n");
	ft_printf("Prueba de %%: %% \n");
}