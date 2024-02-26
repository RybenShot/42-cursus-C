#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int         ft_printf (char const *str, ...);

int         ft_printChar (char letra);
int         ft_printDigit (int digit);
int         ft_printString (char *palabra);
int         ft_printHex(unsigned long p, char format);
int         ft_printUnsigDigit (unsigned int digit);

#endif
