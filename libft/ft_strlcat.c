/* Concatena src en dest hasta lo que diga size terminando en nulo */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*copysrc;

	copysrc = (char *)src;
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (copysrc[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = copysrc[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (ft_strlen(copysrc) + i);
}