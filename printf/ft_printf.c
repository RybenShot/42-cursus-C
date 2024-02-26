#include "ft_printf.h"
// aqui buscamos el formato que estamos buscando
int switcher (char format, va_list args)
{
  int counter;

  counter = 0;
  
  if( format == 'c')                                                    // solo 1 caracter
      counter = ft_printChar(va_arg(args, int));
  else if(format == 's')                                                // una string completa
      counter = ft_printString(va_arg(args, char *));
  else if (format == 'p')                                               // imprime un numero en formato puntero (transforma un numero a hexadecimal, poniendo delante un 0x)
    {
      counter += ft_printString("0x");
      counter += ft_printHex(va_arg(args, unsigned int *), format);
    }
  else if(format == 'x' || format == 'X')                               // transforma e imprime un numero a numero Hexadecimal
      counter = ft_ft_printHex(va_arg(args, unsigned int *), format);
  else if(format == 'd' || format == 'i')                               // imprime un numero completo
      counter = ft_printDigit(va_arg(args, int));
  else if(format == 'u')                                                // imprime un numero sin signo (si le pasamos un numero con signo de vuelve loco, es normal)
      counter = ft_printUnsigDigit(va_arg(args, unsigned int));
  else if(format == '%')                                                // imprime un %
      counter += ft_printChar('%');
  else
    printf("ha pasado algo ...");
  
  return counter;                                                       // retorna el total de caracteres imprimidos
}

/* Escribe letras && encuentra % y redirige */
int ft_printf (char const *str, ...)
{
  int totalCounter;

  va_list args;
  totalCounter = 0;

  va_start(args, str);
  
    while ( *str )
    {
      if (*str == '%')
        {
          str++;
          totalCounter += switcher(*str++, args);
        }
      else
        {
          totalCounter += write(1, str++, 1);                           // creo que aqui habra un problema, hago 1 conteo de mas
          totalCounter++;
        }
    }
    va_end(args);
  return totalCounter;
}