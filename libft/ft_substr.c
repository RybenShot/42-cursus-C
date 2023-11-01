/* Duplica en MD "len" caracteres de la variable "s" empezando donde diga "start"  */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len + 1);
	return (str);
}

