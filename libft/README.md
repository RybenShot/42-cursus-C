# <b>Libft</b>
 
> _El primer proyecto en 42 Malaga_

<br>

## *Este proyecto consiste en programar funciones básicas en C, las cuales luego se compilan en una biblioteca para su uso en otros proyectos a lo largo del Cursus*

# <b>FUNCIONES</b>
 Estas funciones son una imitacion de las funciones originales de C 

| Function | Description |
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