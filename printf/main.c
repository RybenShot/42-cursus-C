#include "printf.h"

/* Programa de pruebas */
void main (){
    int number = 3;
    char letter = 'Z';
    char word[] = "palabra";

    int counter1 = ft_printf("print %p\n", number);
    int counter2 = printf("print %p\n", number);
    printf("\nel original %d y el mio %d", counter2, counter1 );
}