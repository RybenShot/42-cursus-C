#include "printf.h"

int ft_printString (char *palabra)
{
  int count = 0;
  while(*palabra) // siga existiendo ...
      count += ft_printChar(*palabra++);
  return count;
}