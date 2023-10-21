/* Busca la primera coincidencia del caracter c en la cadena str */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (0);
		else
			str++;
	}
	return ((char *)str);
}