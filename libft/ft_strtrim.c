#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)													// Prev de ERROR
		return (NULL);

	if (ft_strlen(s) <= start)			// Prev de ERROR si la cantidad de bytes que hay en la variable es menor o igual que desde donde tiene que empezar...
		return (ft_strdup(""));				// CREA una memoria vacia

	if (ft_strlen(s) - start < len)	// comprueba si hay suficientes bytes para copiar (para no copiar bytes de otros programas)
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);	// genera una MD con la cantidad de bytes que dice len +1, ya sabes porque

	if (!str)												// Prev de ERROR
		return (NULL);
	ft_memcpy(str, s + start, len);	// mete dentro de la nueva variable ("str") los valores empezando desde donde dice start desde la variable original("s") x cantidad de bytes(que nos lo dice "len")
	str[len] = '\0';								// la guinda
	return (str);										// RETORNA la nueva variable
}

char *ft_strtrim(char const *s1, char const *set)
{
  size_t	fin;                                  // decalramos un contador que nos dira el fin de "s1"
	size_t	i;                                    // declaramos un iterador

	if (!s1 || !set)                              // Prev ERRORES // si "s1" || "set" no tienen nada ...
		return (NULL);                              // corta ejecucion
	i = 0;                                        // si llega aqui esque hay algo en los dos // damos valores a las variables 
	fin = ft_strlen(s1);                          // asignamos el numero de caracteres que tiene "s1"

  // [c][a][r][a][c][o][l][a]
  // ---> una coincidencia desde el primero
	while (s1[i] && ft_strchr(set, s1[i]))        // mientras "s1" no llegue al ultimo caracter && haya una coincidencia entre los PRIMEROS caracteres que estamos mirando ...
		i++;                                        // iteramos
	// esta funcion dara TRUE si uno de los caracteres de los que hay en "set" coincide con el caracter de s1[i]
	// en este caso las 2 primeras veces dara true, por lo tanto iterara la "i" x2

  // [c][a][r][a][c][o][l][a]
  //                      <--- busca una coincidencia desde el ultimo
	while (fin > i && ft_strrchr(set, s1[fin]))   // mientras que el contador "fin" sea mayor que el contador "i" &&  haya una coincidencia entre los ultimos caracteres que estamos mirando ...
		fin--;                                      // iteramos
	// al igual que la funcion anterior, pero del reves
	// en este caso iteramos "fin" x1

	return (ft_substr(s1, i, fin - i + 1));       // crea una nueva variable y mete los valores que deseamos, pasandole ..
	// ({variable original del cual cogera los valores}, {desde conce debe empezar a coger}, {donde finalizara} )
}

int main ()
{
  char word[] = "caracola";
  char word2[] = "ca";

  printf("%s", ft_strtrim(word, word2)); // RETORNA "racol"
  return(0);
}

/* devuelve la cadena "s1" modificada sin los caracteres "set" (IMPORTANTE) EMPIEZA A QUITAR CARACTERES DE IZQUIERDA Y DERECHA (a la vez), quiere decir que si no hay coincidencia en alguno de los 2 lados con los caracteres que haya en "set", dejara de contar desde ese lado(Y continuara desde el otro lado hasta que este deje de coincidir tambien) */


// Codigo de Tutor

char    *ft_strchr(const char *str, int c)
{
    while (*str != (char)c)
    {
        if (!(*str))
            return (NULL);
        str++;
    }
    return ((char *)str);
}

char    *ft_strrchr(const char *str, int c)
{
    size_t    i;

    i = strlen(str) + 1;
    while (i--)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
    }
    return (NULL);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;

    if (!s)
        return (NULL);
        
    if (strlen(s) <= start)
        return (strdup(""));
        
    if (strlen(s) - start < len)
        len = strlen(s) - start;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    memcpy(str, s + start, len);
    str[len] = '\0';
    return (str);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    fin;
    size_t    i;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    fin = strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (fin > i && ft_strrchr(set, s1[fin]))
        fin--;
    return (ft_substr(s1, i, fin - i + 1));
}

int main ()
{
  char word[] = "---hola---";
  char letters[] = "-a";

  printf("%s", ft_strtrim(word, letters));
  return(0);
}