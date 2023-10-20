#include <string.h> 
size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t i = 0;

    if (destsize != 0)
    {
        while(src[i] != '\0' && i <= (destsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    return(0);
    //return(ft_strlen(src));               // funcion incompleta, te falta poner esto!!!!!
}

int main()
{
    char letters[] = "########";
    char copyletters[] = "********";

    ft_strlcpy(letters, copyletters, 5);

    return (0);
}

// copia los primeros "size" de caracterres de "src" en "dest"