#include "printf.h"

int ft_printUnsigDigit (unsigned int digit)
{
  long number = digit;
  long counter = 0;
  
  if (number > 9)
  {
    counter += ft_printUnsigDigit(number / 10);
    counter += ft_printUnsigDigit(number % 10);
  }
  else
    counter += ft_printChar(number + '0');
    
  return counter;
}