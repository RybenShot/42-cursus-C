#include <string.h> 

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;
    char *copysrc;
    char *copydest;

    i = 0;
    copysrc = (char *)src;
    copydest = (char *)dest;

    if (!dest && !src)
		return (0);

	while (size > 0)                        // si no se ha acabado el contador
	{
		copydest[i] = copysrc[i];           // ve copiando las cosas de 'src' a 'destino'
		i++;                                /// iteradores
		size--;
	}
    return (dest);                          // RETORNA resultado de 'destino'
}

void *ft_memmove(void *dest, const void *src, size_t size)
{
    char *copysrc;   
    char *copydest;

    copysrc = (char *)src;                          // generamos casteos para poder manejarlos
    copydest = (char *)dest;
 
    if (!copydest || !copysrc)                      // si alguno de las variables no tiene nada ...
        return (0); 
    
    if (copydest < copysrc)                         // si 'destino' tiene MENOS espacios que 'src'
        ft_memcpy(copydest, copysrc, size);         // copia de src a 'destino' DESDE 0

    else                                            // si ha llegado aqui esque el tamano de 'destino' es mas grande que 'src'
    {  
        while (size +1)                                // mientras que size exista (el +1 es para que pueda llega hasta el final de la cadena)
        {
            copydest[size] = copysrc[size];         // copia de src a destino
            size--;                                 // y resta????
        }
    }
    return (copydest);
}


int main()
{
    char letters[] = "a####";            // dest
    char copyletters[] = "********";        // src

    printf("%p", ft_memmove(letters, copyletters, 5));

    return (0);
}
/*
 explicacion:
    esta funcion consta de dos comprovadores y dos resultados
        en el caso de que el 'destino' sea mas peque;o que el 'src', lo copiara igualmente UNQUE se salga del tama;o de 'destino'
        en el caso que 'destino' sea mas grande que 'src', copia sin problema el 'src' usando 'size'


 copia los primeros "size" valores de "src" a "dest" (hasta si se superponen) 
*/