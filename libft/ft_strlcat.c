#include <string.h> 
#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    char *copysrc;

    copysrc = (char *)src;
    i = 0;
    j = 0;

    while (dest[i] != '\0' && i < size)                     // llegamos al final de 'destino' && siempre y cuando que el tamaño TOTAL
                                                            // que le pasamos sea menor que la string de 'destino'
        i++;

    while (copysrc[j] != '\0' && (i + j + 1) < size)        // mientas que 'copysrc' no llegue al final && la suma de el tama;o de 'destino' 
                                                            // y de 'src' +1 sea menor que el numero de 'size' que le queremos pasar ...
    {
        dest[i + j] = copysrc[j];                           // copia en la casilla de 'destino' loq ue haya en 'src'
        j++;
    }

    if (i < size)                                           // si llega hasta aqui significa que se ha copiado todo lo que habia en 'src' 
                                                            // en 'destino' y aun asi queda algo de 'size', asi que metemos valores nulos
        dest[i + j] = '\0';

    return (ft_strlen(copysrc) + i);                        // RETORNAMOS ????????
}

int main()
{
    char letters[] = "########";
    char copyletters[] = "********";

    printf("%zu", ft_strlcat(letters, copyletters, 5));

    return (0);
}


// concatena la cadena "src" en "dest" hasta que este llegue a su maximo(size) terminando en nulo