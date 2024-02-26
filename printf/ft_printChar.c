#include "printf.h"

int ft_printChar (char letra)
{
  write(1, &letra, 1);
  return 1;
}