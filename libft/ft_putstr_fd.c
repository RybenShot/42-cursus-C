#include <libft.h>

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (0);					// Prev de ERROR
	write(fd, s, ft_strlen(s));		// "hola caracola"	
}

int main() {

	char	letters[] = "hola caracola";
  
  ft_putstr_fd(letters, 1);

    return 0;
}

/* 
imprime una string en ... (fd es la salida) 
*/