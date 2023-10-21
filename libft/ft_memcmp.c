/* Compara los primeros size de valores de s1 y s2 */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*copys1;
	unsigned char	*copys2;

	i = 0;
	copys1 = (unsigned char *)s1;
	copys2 = (unsigned char *)s2;
	while (size)
	{
		if (copys1[i] != copys2[i])
			return (copys1[i] - copys2[i]);
		else
		{
			i++;
			size--;
		}
	}
	return (0);
}