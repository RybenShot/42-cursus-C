#include "ft_printf.h"

int ft_printString (char *string)
{
  int count;

  count = 0;
  if(!string)
    return (ft_printString("(null)"));
  while(*string) // siga existiendo ...
      count += ft_printChar(*string++);
  return count;
}