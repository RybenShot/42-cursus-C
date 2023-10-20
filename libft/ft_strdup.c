/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:52:02 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 20:06:31 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;
    return(i);
}
char ft_strdup(const char *str)
{
    int i;
    int size;
    char *copystr;

    i = 0;
    size = ft_strlen(str);
    copystr = (char *)malloc(sizeof(*copystr) * (size + 1));

    if (copystr == NULL)
        return(0);

    while (i < size)
    {
        copystr[i] = str[i];
        i++;
    }
    
    copystr[i] = '\0';
    return(copystr);
    
}
/*
int main ()
{
    char word[] = "hello!";
    printf("s", ft_strdup(word));
    return(0);
}

COPIA Y CREACION DE UNA MEMORIA DINAMICA
    hace una copia dinamica de la cadena "str"
*/