/* Comprueba si el caracter c es alfabetico */
#include "libft.h"

int numero : 3

char numero : "a"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}