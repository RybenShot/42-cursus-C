#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>     // para usar la funcion write
#include <stdio.h>      // para usar la funcion printf
#include <stdarg.h>     // para trabajar con los argumentos

int         ft_printf (char const *str, ...);

int         ft_printChar (char letra);
int         ft_printDigit (int digit);
int         ft_printString (char *palabra);
int         ft_printHex(unsigned long p, char format);
int         ft_printUnsigDigit (unsigned int digit);

#endif
