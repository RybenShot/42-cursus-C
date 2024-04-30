#include <string.h> 
void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;
    char *copysrc;
    char *copydest;

    i = 0;
    copysrc = (char *)src;                              // casteamos porque la variable que referenciamos esta en void
    copydest = (char *)dest;
    if (!dest && !src)
		return (0);
	while (size > 0)
	{
		copydest[i] = copysrc[i];
		i++;
		size--;
	}
    return (dest);
}
/*
int main()
{
    char letters[] = "########";
    char copyletters[] = "********";

    ft_memcpy(letters, copyletters, 5);

    return (0);
}
 Copia los primeros "size" de valores de "srt" a "dest"
*/