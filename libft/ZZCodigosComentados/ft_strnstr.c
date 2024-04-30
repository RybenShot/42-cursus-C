#include <string.h> 
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned int i;                                                 // declaramos variables iniciales
    unsigned int j;

    i = 0;                                                          // damos valores
    if(needle[0] == '\0')                                           // Comprobacion de ERRORES, si loq que buscamos esta vacio...
        return((char *) haystack);                                  // RETORNAMOS 'haystack' normal

    while (haystack[i] && i < len)                                  // si existe 'haystack'(por si llega a '\0') && el iterador no ha llegado al limite...
    {
        j = 0;                                                      // le damos valor a j(esta parte es muy IMPORTANTE ya que si los primeros caracteres coinciden pero alguno de 
                                                                    // por medio no, volveremos a buscar desde 0 (por eso la j = 0) PERO la variable haystack seguira adelante)

        if (haystack[i] == needle[j])                               // COINCIDENCIA!!! si un caracter copincide ... 
        {
            while (i + j < len && haystack[i + j] == needle[j])     // mientras la suma de los dos iteradores sea menor que len && la caracter que estoy mirando de 'haystack' sea 
                                                                    // igual que la caracter que estamos mirando de 'needle'
                                                                    // IMPORTANTE en este while terminara el programa cuando deje de coincidir los caracteres && iterara gracias a la variable 'j'
            {
                j++;                                                // iterador que nos servira para: (iterar haystack, ya que a partir de aqui NO ITERAREMOS LA 'I') (iterar needle, 
                                                                    // para seguir comprovando hasta que lleguemos al final de este o deje de coincidir caracteres)

                if (!needle[j])                                     // en el momento que dejemos de encontrar coincidencia ..
                    return((char *)&haystack[i]);                   // cortaremos la ejecucion
            }
        }
        i++;                                                        // NO COINCIDENCIA!!! solo llegara aqui cuando NO ha encontrado ninguna coincidencia && iteramos para seguir 
                                                                    // comprobando caracteres de 'haystack'
    }
}

int main ()
{
    char letters[] = "pula";
    char letters2[] = "hoya";
//                          haystack  needle
    printf("%s", ft_strnstr(letters, letters2, 3));
    return(0);
}

// busca la primera coincidencia de la subcadena(needle) en la cadena "haystack" hasta los primeros (size) de valores;