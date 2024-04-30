#include <stdio.h>
#include <string.h> 
// las funciones "void" pueden retornar tanto caracteres como enteros
void *ft_memcmp(const void *str, int c, size_t size)    // RECUERDA!! tenemos una variable void, osea que apra poder operar con esa variable tendremos que hacerle un CASTEO
{
    size_t i = 0;
    unsigned char *copystr = (unsigned char *)str;  // generamos la copya y casteamos la variable que viene en void

    while(size--)                                   //  comprueba de que esiste y DESPUES resta 1
    {
        if (copystr[i] == c)                        // si la copia coincide con el caracter introducido...
        {
            return(&copystr[i]);                    // retorna la posicion donde ha encontrado la coincidencia
        }
        else
        {
            i++;
        }
    }
    return(0);                                      // si llega hasta aqui es porque no ha encontrado ninguna coincidencia
}

int main ()
{
    char letters[] = "hola";

    printf("%p", ft_memcmp(letters, 'c', 3));
    return(0);
}

// retorna un puntero a la posicion donde ha encontrado al coincidencia
// busca la primera conincidencia del byte "c" en "str" hasta el tamaño maximo "size"