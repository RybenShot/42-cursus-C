#include "printf.h"

int ft_printDigit (int digit)
{
  long number = digit;
  long counter = 0;
  
  if (number < 0)
  {
    counter += ft_printChar('-');
    number *= -1;
  }
  if (number > 9)
  {
    counter += ft_printDigit(number / 10);
    counter += ft_printDigit(number % 10);
  }
  else
    counter += ft_printChar(number + '0');
    
  return counter;
}
