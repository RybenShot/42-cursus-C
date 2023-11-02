/* Crea y copia un array de Strings al separar la string "s" 
en substrings con el caracter "c" como delimitador */
#include "libft.h"

static size_t	ft_wordcounter(char const *str, char c)
{
	size_t	i;
	size_t	contador;

	i = 0;
	contador = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != '\0' && str[i] != c)
				i++;
			contador++;
		}
		else
			i++;
	}
	return (contador);
}

static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
}

static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr (s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_free (str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str || !s)
		return (NULL);
	return (ft_make_cells(str, (char *)s, c));
}