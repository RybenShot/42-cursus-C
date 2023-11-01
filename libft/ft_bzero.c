/* Cambia los "size" primeros valores de "str" por nulo */
#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*copysrt;

	i = 0;
	copysrt = (char *)str;
	while (i < size)
	{
		copysrt[i] = 0;
		i++;
	}
}