/* Comprueba si el caracter c es numerico */
#include "libft.h"

int	ft_isdigit(int arg)
{
	return (arg >= 48 && arg <= 57);
}