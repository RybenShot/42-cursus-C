#include "ft_printf.h"

int ft_printUnsigDigit (unsigned int digit)
{
  long counter;

  counter = 0;
  
  if (digit > 9)
  {
    counter += ft_printUnsigDigit(digit / 10);
    counter += ft_printUnsigDigit(digit % 10);
  }
  else
    counter += ft_printChar(digit + '0');
    
  return counter;
}