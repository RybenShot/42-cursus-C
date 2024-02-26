#include "printf.h"

int    ft_printHex(unsigned long p, char format)
{
  int counter = 0;
  char hexadecimales[] = "0123456789abcdef";
  char hexadecimalesMay[] = "0123456789ABCDEF";
  
  if (p == 0)
    return (0);  
  else if (p >= 16)
  {
    counter += ft_printHex(p / 16, format);
    counter += ft_printHex(p % 16, format);
  }
  else
  {
    if (format == 'X')
        counter += ft_printChar(hexadecimalesMay[p]);
    else    // llegara aqui cuando sea 'x'(minus) y 'p'(punteros)
        counter += ft_printChar(hexadecimales[p]);
  }
  return (counter);
}