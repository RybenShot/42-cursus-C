#include <stdio.h>
char *ft_strchr(const char *str, int c)
{
    while (*str != (char)c)
    {
        if (*str == '\0')
        {
            return(0);
        }
        else
        {
            str++;
        }
    }
    return((char *)str);     // OJO!!, este codigo pasa desde la primera coincidencia en adelante!!
    
}
int main ()
{
    char letters[] = "hola mundo";

    printf("%s", ft_strchr(letters, 'a'));
    return(0);
}
// busca la primera aparicion del caracter "c" en la cadena "str"