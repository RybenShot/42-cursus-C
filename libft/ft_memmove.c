/* Copia los "size" primeros valores de "src" 
a "dest" (hasta si se superponen) */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*copysrc;
	char	*copydest;

	copysrc = (char *)src;
	copydest = (char *)dest;
	if (!copydest && !copysrc)
		return (NULL);
	if (copydest < copysrc)
		ft_memcpy(copydest, copysrc, size);
	else
	{
		while (size--)
			copydest[size] = copysrc[size];
	}
	return (copydest);
}