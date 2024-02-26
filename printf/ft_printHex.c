#include "ft_printf.h"

int    ft_printHex(unsigned long numero, char format)
{
  int counter;
  char hexadecimales[16];
  char hexadecimalesMay[16];

  counter = 0;
  hexadecimales[] = "0123456789abcdef";
  hexadecimalesMay[] = "0123456789ABCDEF";
  
  if (numero == 0 || numero == NULL)
    return (ft_printChar('0'));  
  else if (numero >= 16)
  {
    counter += ft_printHex(numero / 16, format);
    counter += ft_printHex(numero % 16, format);
  }
  else
  {
    if (format == 'X')
        counter += ft_printChar(hexadecimalesMay[numero]);
    else                                                          // llegara aqui cuando sea 'x'(minus) y 'p'(punteros)
        counter += ft_printChar(hexadecimales[numero]);
  }
  return (counter);
}