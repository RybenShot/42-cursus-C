/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:12:27 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 16:20:49 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen(const char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;
    return(i);
}

char *ft_strrchr(const char *str, int c)
{
    size_t i;
    i = strlen(str) + 1;

    while (i--)
    {
        if (str[i] == (char)c)
            return((char *)&str[i]); 
    }
    return(0);
}
/*int main ()
{
    char letters[] = "hola mundo";

    printf("%s", ft_strrchr(letters, 'a'));
    return(0);
}
// busca la ULTIMA coincidencia del caracter "c" en la cadena "str"
    RETORNA
        si lo encuentra, la posicion
        sino NULL
*/