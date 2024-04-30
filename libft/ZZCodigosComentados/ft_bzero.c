#include <string.h>
void ft_bzero(void *str, size_t size)
{
    size_t i;
    char *copysrt;

    i = 0;
    copysrt = (char *)str;

    while(i < size)
    {
        copysrt[i] = 0;          // aqui, usando la nueva variable (copysrt), cambiamos la variable original
        i++;
    }
}

int main()
{
    char letters[] = "########";

    ft_bzero(letters, 5);

    return (0);
}

//              \0                         5                       srt
//convierte en NULO los valores de los "size" primeros datos de "srt"