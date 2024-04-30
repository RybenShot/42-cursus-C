#include <stdio.h>
#include <string.h> 
int ft_strncmp(const char *s1, const char *s2, size_t size)
{
    size_t i = 0;                           // metemos este iterador para poder comparar los caracteres posteriormente

    while (size--)                          // comprueba de que esiste y DESPUES resta 1
    {
        if (s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0 )    // si s1 no es igual que 2 OO s1 es igual a 0 (ha llegado al final del string) OO s1 es igual a 0
        {
            return((unsigned char)s1[i] - (unsigned char)s2[i]);     // haz esto       // porque el unsigned???
        }
        else                                                // si lo anterior no es posible...
        {
            i++;                                            // suma 1 al iterador
        }
    }
    return(0);                                              // si llega hasta aqui esque todos los caracteres han sido exactamente iguales
}

int main ()
{
    char letters[] = "hola";
    char letters2[] = "mundo";

    printf("%d", ft_strncmp(letters, letters2, 3));
    return(0);
}

// compara los primeros "size" de caracteres de las cadenas "s1" y "s2";
//si las 2 cadenas son iguales, simplemente RETORNA un 0, si hay alguna diferencia devolverá la resta de los mismos