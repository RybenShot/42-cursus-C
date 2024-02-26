#include "printf.h"
// Esta funcion solo imprime char, PEEEROOOO puede imprimir numero seguin tabla ASCII

int ft_printChar (char letra)
{
  write(1, &letra, 1);
  return 1;
}