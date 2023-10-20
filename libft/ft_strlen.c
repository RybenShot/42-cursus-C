/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:32 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 19:57:01 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t ft_strlen(const char *s)
{
    int i;
    i = 0;

    while (s[i] != '\0')
        i++;
    return(i);
}
/*
int main ()
{
    char letters[] = "hola";
    //int number = 4;

    printf("%d", ft_strlen(letters));
    return (0);
}
 comprobamos la longitud del string
    RETORNA la longitud total del string
*/
