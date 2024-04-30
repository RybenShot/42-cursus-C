#include <stdio.h>
#include <string.h> 
int ft_memcmp(const void *s1, const void *s2, size_t size)
{
    size_t i;
    unsigned char *copys1;    // casteamos para poder operar con estas variables que entran como VOID
    unsigned char *copys2;

    i = 0;
    copys1 = (unsigned char *)s1;
    copys2 = (unsigned char *)s2;

    while(size)                       // lo mismo que los anteriores
    {
        if (copys1[i] != copys2[i] || copys1[i] == 0 || copys2[i] == 0 )     // si s1 y s2 son distintos o alguno de los 2 llega al final...
        {
            return(copys1[i] - copys2[i]);  // retorna la resta 
        }
        else
        {
            i++;                        // si llega aqui esque la comprobacion anterior coinciden los 2 caracteres
            size--;
        }
    }
    return(0);                          // si ha llegado hasta aqui esque todo ha sido exactamente igual
}


int main ()
{
    char letters[] = "hola";
    char letters2[] = "hoya";

    printf("%d", ft_memcmp(letters, letters2, 3));
    return(0);
}
// RETORNA 0 si las comparaciones son exactamente iguales
    // sino RETORNA la resta de los 2
// compara los primeros "size" valores de "s1" y "s2"