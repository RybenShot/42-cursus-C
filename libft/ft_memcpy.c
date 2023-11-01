/* Copia los "size" primeros valores de "src" a "dest" */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*copysrc;
	char	*copydest;

	i = 0;
	copysrc = (char *)src;
	copydest = (char *)dest;
	if (!dest && !src)
		return (0);
	while (size)
	{
		copydest[i] = copysrc[i];
		i++;
		size--;
	}
	return (dest);
}