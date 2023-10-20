/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:02:11 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/11 17:04:59 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    if(needle[0] == '\0')
        return((char *) haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while (i + j < len && haystack[i + j] == needle[j])
            {
                j++;
                if (!needle[j])
                    return((char *)&haystack[i]);
            }
        }
        i++;
    }
    return (0);
}
/*int main ()
{
    char letters[] = "pula";
    char letters2[] = "hoya";
//                          haystack  needle
    printf("%s", ft_strnstr(letters, letters2, 3));
    return(0);
}

 busca la primera coincidencia de la subcadena(needle) en la cadena "haystack" hasta los primeros (size) de valores;
*/