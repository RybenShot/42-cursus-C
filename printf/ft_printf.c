
#include "printf.h"

int switcher (char format, va_list args)
{
  int counter = 0;
  
  if( format == 'c')                                                    // solo 1 caracter
      counter = ft_printChar(va_arg(args, int));
  else if(format == 's')                                                // una string completa
      counter = ft_printString(va_arg(args, char *));
  else if (format == 'p')                                               // imprime un numero en formato ountero (transforma un numero a hexadecimal, poniendo delante un 0x)
    {
      counter += ft_printString("0x");
      counter += ft_printHex(va_arg(args, unsigned int *), format);
    }
  else if(format == 'x' || format == 'X')                               // transforma e imprime un numero a numero Hexadecimal
      counter = ft_ft_printHex(va_arg(args, unsigned int *), format);
  else if(format == 'd' || format == 'i')                               // un numero completo sin digitos
      counter = ft_printDigit(va_arg(args, int));
  else if(format == 'u')                                                // un numero completo sin digitos
      counter = ft_printUnsigDigit(va_arg(args, unsigned int));
  else if(format == '%')                                                // imprime un %
      counter += ft_printChar('%');
  else
    printf("ha pasado algo ...");
  
  return counter;
}

/* Escribe letras && encuentra % y redirige */
int ft_printf (char const *str, ...)
{
  int counter = 0;
  va_list args;
  va_start(args, str);
  
    while ( *str )
    {
      if (*str == '%')
        {
          str++;
          counter += switcher(*str++, args);
        }
      else
        {
          counter += write(1, str++, 1);
          counter++;
        }
    }
    va_end(args);
  return counter;
}