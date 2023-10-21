/* Busca la última coincidencia del caracter c en la cadena str */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (0);
}