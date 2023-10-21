/* Imprime un cracter "c" en ... (siendo fd la salida) */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}