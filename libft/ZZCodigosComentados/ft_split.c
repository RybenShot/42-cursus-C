#include <string.h>

//      "Hola-mundo-en-c"// 3         // El delimitador en este caso es "-" y la frase es "str"
static size_t	ft_wordcounter(char const *str, char c)
{
	size_t	i = 0;                            // generamos iteradores
	size_t	contador = 0;

	while (str[i] != '\0')                    // mientras "str" no ha llegado a nulo ... // cuando llegue corta ejecucion
	{
		if (str[i] != c)                        // si "str" no coincide con "c" // si coincidiera AQUI, iteraria porque ...
                                            // Caso 1: o empezamos con un delimitador(cosa que no nos interesa desde el principio) 
                                            // Caso 2: ya hemos contado el delimitador(porque en el siguiente while, si coincidiera, ya se contaria ahi, y al volver aqui no queremos contarlo OTRA VEZ)
		{
			while (str[i] != '\0' && str[i] != c) // mientras "str" no haya llegado a nulo && "str" no coincida con "c" ... && cuando este mirando la ultima palabra, al llegar a nulo, contara la ultima palabra 
				i++;                                // itera
			contador++;                           // SI LLEGA AQUI ESQUE HA ENCONTRADO UNA COINCIDENCIA (volvemos al "if")
		}
		else
			i++;                                  // si llega aqui es porque ha encontrado ...
                                            // caso 1: empieza el str con un delimitador ||  Caso 2: ha encontrado 2 delimitadores seguidos
	}
	return (contador);                        // RETORNA el numero de veces que ha encontrado un delimitador entre las palabras(lo cual indicara cuandas palabras hay entre delimitador y delimitador)
}

/* Le pasamos 
    el puntero de la frase completa (s)
    el delimitador(c)
*/
static size_t	ft_len(char const *s, char c)
{
	size_t	len = 0;                    // Declaramos el iterador y le damos valor

	while (*s != '\0' && *s != c)       // mientras s no llegue al final && s no coincida con el delimitador...
	{
				len++;                        // si llegua aqui significa que lo que miramos en s es un caracter (no es igual que el delimitador), asi que sumamos +1 a len
				s++;                          // iteramos la s para mirar el siguiente valor de la frase
	}
	return (len);                       // llegar aqui cuando Caso 1: s haya coincidido con un delimitador Caso 2: la frase haya llegado hasta el final(NULL)
                                      // RETORNA Numero de caracteres que hay hasta un delimitador
}

// libera los guardados de memoria dinamica La funcion mas estupida de todas
static void	ft_free(char **str)  // Porque doble puntero????
{
	size_t	i = 0;        // declaramos y asignamos

	while (str[i])        // si noha llegado a nulo ...
	{
		free(str[i]);       // libera el espacio señalado
		i++;                // iteramos
	}
	free(str);            // Y finalmente liberamos el "str" entero?
}

//asigna MD a una string creada a partir del indice (start) de "s" con la longitud "len"  
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)                           // Prev ERROR
		return (NULL);

	if (ft_strlen(s) <= start)        // Prev ERROR / Si la posicion desde donde parte es menor o igual que desde donde dice "star"
		return (ft_strdup(""));             // CREA una memoria vacia
  // 
	if (ft_strlen(s) - start < len)   // Prev ERROR / si la longitud de la variable - start (para prevenir si la cantidad de bytes que tiene que copiar es superior a la que le queda) 
                                    // ES MENOR a la cantidad de bytes que tiene que crear (recuerda que esta creando una nueva variable a partir de otra)
		len = ft_strlen(s) - start;     //CORRIGUE el LEN - la longitud se REASIGNA a la longitud de la variable "s" - start // PORQUE? para prevenir de que se copien bytes de otras variables
	str = (char *)malloc(len + 1);    // si llega aqui, esque hay hueco suficiente para copiar lo que dice // En el str (la nueva variable), ve haciendo hueco que se han pedido con el 'len'

	if (!str)                         // Prev de ERROR // si str, esta vacio (osea que en el len se le ha metido un 0 y solo ha quedado el fin del string)...
		return (NULL);                  // corta ejecucion
    //           ┌-------┐ al poner esto, no solo le estamos pasando la variable para que opere con ella sino que encima le estamos dando un inicio diferente, gracias al "start" va a empezar a revisar desde donde diga "start"
	ft_memcpy(str, s + start, len);   // Si llega aqui es porque hay al menos 1 hueco disponible 
                                    // va a copiar en "str" lo que haya en "s", y va a copiar tantos caracteres como "len" diga
	str[len] = '\0';                  // Y al final le pone la ginda
	return (str);                     // RETORNA EN MD lo que haya en str 
}

/* se le pasa ...
    un DOBLE PUNTERO que es la variable con MD que generamos antes
    un puntero normal que tiene la frase completa
    y el caracter DELIMITADOR
*/
static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;                                // Declaramos variable que usaremos despues
	size_t	n = 0;                              // declaramos iteradores

	while (*s != '\0')                          // mientras el puntero "s"(el que tiene la frase completa) NO llegue al final ...
	{
		if (*s != c)                              // si lo que miramos en "s" no es "c" (EL DELIMITADOR)
		{
      // cuenta el numero de caracteres de una palabra
			len = ft_len(s, c);                     //(2a funcion, arriba) le damos valor a len(pero de una forma especial) pasamos la FRASE y el DELIMITADOR 
                                              // se le asigna el Numero de caracteres que ha encontrado antes de un nuevo delimitador
			s = s + len;                            // IMPORTANTISIMO reasignamos la posicion de s, porque ya hemos visto los caracteres hasta esa posicion
      /*
      EJ:
           ┌-----------┐  len == 4        
          [H][o][l][a][-][w][e][y]                                                                                                                  ┌-------┐  len == 3  
          en este caso, para la siguiente vez que vayamos a contar palabras, tenemos que empezar desde donde lo dejo el ultimo conteo  [H][o][l][a][-][w][e][y]

      */  
			str[n] = ft_substr(s - len, 0, len);    // crea y escribe una nueva variable desde la variable original partiendo de un punto hasta el numero de caracteres que le dice len

			if (str[n] == NULL)                     // Prev de ERROR
			{
				ft_free(str);                         // libera el espacio reservadoa nteriormente
				return (NULL);                        // Corta ejecucion
			}
			n++;                                    // iteramos la n(RECUERDA, la "n" la estamos usando para iterar el arrayde punteros de caracteres nuevos que estamos haciendo, cada valor contendra una palabra de la frase original)
		}
		else
			s++;                                    // si llegamos aqui esque hemos encontrado en "s" una coincidencia con el delimitador ("c")
	}
	str[n] = NULL;                              // cuando llegue aqui la variable "s" habra llegado a su NULL, asiq ue le ponemos la guinda a nuestro array de M*****
	return (str);                               // retornamos el array con las variables 
}

char **ft_split(char const *s, char c)
{
  char	**str;                                                          // declaramos un DOBLE puntero

	str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));   //(primera funcion declarada) contamos el numero de palabras divididas por el delimitador y creamos MD con ese numero +1 para el Null al final

	if (!str || !s)                                                       // Prev de ERROR / por si se hubiera generado mal la memoria o no existiera un delimitador
		return (NULL);
	return (ft_make_cells(str, (char *)s, c));                            //(funcion justo arriba) RETORNA array con las variables 
}

int main ()
{
  char word[] = "Hola-mundo-en-c";    // 3
  char delimitador = 45;              // -

  printf("%s", ft_split(word, delimitador));
  return(0);
}

/* 
asigna memoria dinamica a un array de strings al separar la strng "s" en substrings con el caracter "c" como delimitador 
*/




// CODIGO PARA TUTOR

#include <string.h>

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

static size_t    ft_wordcounter(char const *s, char c)
{
    size_t    i;
    size_t    w;

    i = 0;
    w = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            while (s[i] != '\0' && s[i] != c)
                i++;
            w++;
        }
        else
            i++;
    }
    return (w);
}

static size_t    ft_len(char const *s, char c)
{
    size_t    len;

    len = 0;
    while (*s != '\0' && *s != c)
    {
                len++;
                s++;
    }
    return (len);
}

static void    ft_free(char **str)
{
    size_t    i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

static char    **ft_make_cells(char **str, char *s, char c)
{
    size_t    len;
    size_t    n;

    n = 0;
    while (*s != '\0')
    {
        if (*s != c)
        {
            len = ft_len(s, c);
            s = s + len;
            str[n] = ft_substr(s - len, 0, len);
            if (str[n] == NULL)
            {
                ft_free(str);
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

char    **ft_split(char const *s, char c)
{
    char    **str;

    str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
    if (!str || !s)
        return (NULL);
    return (ft_make_cells(str, (char *)s, c));
}

int main ()
{
  char word[] = "Hola-mundo-en-c";    // 3
  char delimitador = 45;

  printf("%s", ft_split(word, delimitador));
  return(0);
}