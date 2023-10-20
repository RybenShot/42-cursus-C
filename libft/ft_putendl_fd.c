#include <libft.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return (0);
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

void main()
{
    char letters[] = "hola caracola";

    ft_putendl_fd(letters, 1);

    return;
}

/* 
imprime una string con un salto de linea al final 
*/