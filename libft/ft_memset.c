/* Cambia los "size" primeros valores de "str" por lo que ponga en "c" */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;
	char	*copystr;

	i = 0;
	copystr = (char *)str;
	while (i < size)
	{
		copystr[i] = c;
		i++;
	}
	return (str);
}