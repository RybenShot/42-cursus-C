/* Busca la primera coincidencia del byte c en str hasta el tamaño maximo size */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*copystr;

	i = 0;
	copystr = (unsigned char *)str;
	while (size--)
	{
		if (copystr[i] == (unsigned char)c)
			return (&copystr[i]);
		i++;
	}
	return (NULL);
}