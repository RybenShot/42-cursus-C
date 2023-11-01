/* Modifica/Elimina la cadena "s1" los caracteres que aparezcan en "set", OJO! empezando de izquierda y de derecha hasta que dejen de haber coincidencias*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	fin = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (fin > i && ft_strrchr(set, s1[fin]))
		fin--;
	return (ft_substr(s1, i, (fin - i) + 1));
}