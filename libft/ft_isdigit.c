/* Comprueba si el caracter c es numerico */
#include "libft.h"

int	ft_digit(int arg)
{
	arg += '0';
	if (arg >= 48 && arg <= 57)
		return (1);
	else
		return (0);
}