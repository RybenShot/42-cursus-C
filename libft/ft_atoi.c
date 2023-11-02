/* Convierte str en un int */
#include "libft.h"

// quita los caracteres raros del principio
static int	ft_space(char a)
{
	if (a == ' ' || a == '\f' || a == '\r')
		return (1);
	else if (a == '\n' || a == '\t' || a == '\v')
		return (1);
	return (0);
}

// quita los simbolos iniciales y los tiene en cuenta
static int	ft_symbol(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

// Funcion principal
int	ft_atoi(const char *str)
{
	int	i;
	int	nmb;
	int	symbol;

	i = 0;
	nmb = 0;
	symbol = 1;
	if (str[i] == '\0')
		return (0);
	while (ft_space(str[i]) != 0)
		i++;
	if (str[i + 1] == '+' || str[i + 1] == '-')
		return (0);
	while (ft_symbol(str[i]) != 0)
	{
		if (str[i] == '-')
			symbol = -symbol;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nmb = nmb * 10 + (str[i] - '0');
		i++;
	}
	return (symbol * nmb);
}
/*
saca los primeros numeros de una cadena de caracteres a numeros enteros
int main()
{
    char numbers[] = "42_3456";
    printf("d", ft_atoi(numbers));
    return(0);
}
*/