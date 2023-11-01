/* Duplica en MD la variable "str" con un \0 al final */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		size;
	char	*copystr;

	i = 0;
	size = ft_strlen(str);
	copystr = (char *)malloc(sizeof(*copystr) * (size + 1));
	if (copystr == NULL)
		return (0);
	while (i < size)
	{
		copystr[i] = str[i];
		i++;
	}
	copystr[i] = '\0';
	return (copystr);
}