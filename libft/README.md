# <b>Libft</b>
 
> _El primer proyecto en 42 Malaga_

<br>

## *Este proyecto consiste en programar funciones básicas en C, las cuales luego se compilan en una biblioteca para su uso en otros proyectos a lo largo del Cursus*

# <b>FUNCIONES BASICAS</b>
 Estas funciones son una imitacion de las funciones originales de C.

|  Función | Descripción |
| -------- | ----------- |
|[ft_isalpha](./ft_isalpha.c) |comprueba si el caracter `c` es **alfabetico**                                    |
|[ft_isdigit](./ft_isdigit.c) |comprueba si el caracter `c` es **numerico**                                      |
|[ft_isalnum](./ft_isalnum.c) |comprueba si el caracter `c` es **alfabetico** o **numerico**                     |
|[ft_isascii](./ft_isascii.c) |comprueba si el caracter `c` está en la tabla **ascii**                           |
|[ft_isprint](./ft_isprint.c) |comprueba si el caracter `c` es **imprimible**                                    |
|[ft_strlen](./ft_strlen.c)   |calcula la **longitud** de la cadena `str`                                        |
|[ft_memset](./ft_memset.c)   |cambia los `size` primeros valores de `str` por lo que ponga en `c`               |
|[ft_bzero](./ft_bzero.c)     |cambia los `size` primeros valores de `str` por **nulo**                          |
|[ft_memcpy](./ft_memcpy.c)   |copia los `size` primeros valores de `src` a `dest`                               |
|[ft_memmove](./ft_memmove.c) |copia los `size` primeros valores de `src` a `dest` (hasta si se superponen)      |
|[ft_srtlcpy](./ft_strlcpy.c) |copia los `size` primeros caracteres de `src` a `dest`                            |
|[ft_strlcat](./ft_strlcat.c) |concatena `src` en `dest` hasta lo que diga `size` terminando en nulo             |
|[ft_toupper](./ft_toupper.c) |convierte el caracter `c` en **mayuscula**                                        |
|[ft_tolower](./ft_tolower.c) |convierte el caracter `c` en **minuscula**                                        |
|[ft_strchr](./ft_strchr.c)   |busca la **primera** coincidencia del caracter `c` en la cadena `str`             |
|[ft_strrchr](./ft_strrchr.c) |busca la **última** coincidencia del caracter `c` en la cadena `str`              |
|[ft_strncmp](./ft_strncmp.c) |compara los `size` primeros **caracteres** de las cadenas `s1` y `s2`             |
|[ft_memchr](./ft_memchr.c)   |busca la primera coincidencia del byte `c` en `str` hasta el tamaño maximo`size`  |
|[ft_memcmp](./ft_memcmp.c)   |compara los primeros `size` de **valores** de `s1` y `s2`                         |
|[ft_strnstr](./ft_strnstr.c) |busca la primera coincidencia de la **subcadena** `needle` en la cadena `haystack`|
|[ft_atoi](./ft_atoi.c)       |convierte `str` en un `int`                                                       |
|||
|[ft_calloc](./ft_calloc.c)   |asigna **Mermoria Dinamica** a una string empezada por valores **nulos**          |
|[ft_strdup](./ft_strdup.c)   |asigna **MD** a una nueva string a partir de otra original `str`.                 |


# <b>FUNCIONES ADICIONALES</b>
 Estas funciones o no son de la librería *libc, o lo son pero de una forma distinta.s

|  Función | Descripción |
| -------- | ----------- |
|[ft_substr](./ft_substr.c)         |asigna MD a una string creada a partir del **indice**`start` de `s` con la longitud`len`                        |
|[ft_strjoin](./ft_srtjoin.c)       |asigna MD a una string creada a partir de la **concatenación** de `s1` cocn `s2`                                |
|[ft_strtrim](./ft_strtrim.c)       |asigna MD a una string que contiene `str` **sin** los caracteres `set`                                          |
|[ft_split](./ft_split.c)           |asigna MD a un **array de strings** al separar la string `s` en substrings con el caracter `c` como delimitador |
|[ft_itoa](./ft_itoa.c)             |convierte un `n` **int** a una string MD                                                                        |
|[ft_striteri](./ft_striteri.c)     |aplica la función `f` en cada caracter de la cadena `s`                                                         |
|[ft_putchar_fd](./ft_putchar_fd.c) |imprime el caracter `c` al `fd`                                                                                 |
|[ft_putstr_fd](./ft_putstr_fd.c)   |imprime la string `s` al `fd`                                                                                   |
|[ft_putendl_fd](./ft_putendl_fd.c) |imprime `s` al `fd` con un **salto de linea** al final                                                          |
|[ft_putnbr_fd](./ft_putnbr_fd.c)   |imprime el numero `n` al `fd`                                                                                   |