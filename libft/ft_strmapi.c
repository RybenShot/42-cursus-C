

#include <libft.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;									// iterador
	size_t			len;								// longitud de la string
	char			*str;								// copia de str en MD(memoria dinamica)

	if (!s || !f)										// prev ERROR
		return (NULL);
	len = ft_strlen(s);									// vemos cuantos caracteres tiene la cadena (para ver de cuantas veces tendremos que hacer el bucle)
	str = (char *)malloc(sizeof (char) * (len + 1));	// generamos la copia de str EN MEMORIA DINAMICA

	if (!str)											// Prev ERROR
		return (NULL);
	i = 0;
	while (i < len)										// para empezar el bucle, cuando sea False esque ha llegado la String al final
	{
		str[i] = f(i, s[i]);							// hace la funcion sobre el caracter "X" y reasignas el resultado a "str[X]"
		i++;											// iteramos
	}
	str[i] = '\0';										// ponemos la guinda
	return (str);										// retornamos la copia de "s", con la funcion aplicada por cada caracter
}

int main ()
{
    char letters[] = "hola";

    printf("%d", ft_strmapi(letters, ));
    return(0);
}

/*
Aplica la funcion "f" en cada caracter de la cadena "s"
	RETORNA una copia de "s" en MD(memoria dinamica)


NO LO ENTIENDO DEL TODO
	entiendo la teoria, pero no entiendo como ponerlo en practica, nose como es la sintaxis para que esto funcione
*/