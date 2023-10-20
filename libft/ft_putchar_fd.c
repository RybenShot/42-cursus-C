#include <libft.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main() {
  
  ft_putchar_fd('c', 0);

    return 0;
}

/* 
imprime un caracter "c"... (fd es la salida) 
    0: Descriptor de archivo estándar de entrada (stdin).
    1: Descriptor de archivo estándar de salida (stdout). (monitor)
    2: Descriptor de archivo estándar de error (stderr).
*/
