/* Comprueba si el caracter c está en la tabla ascii */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}