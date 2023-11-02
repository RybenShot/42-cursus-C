/* Crea y asiga Memoria dinamica a una nueva v
ariable empezada por valores nulos */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc (num * size);
	if (p == NULL)
		return (0);
	else
		ft_bzero (p, (num * size));
	return (p);
}