/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:54:39 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 15:56:40 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
    while (*str != (char)c)
    {
        if (*str == '\0')
            return(0);
        else
            str++;
    }
    return((char *)str);
}
/*int main ()
{
    char letters[] = "hola mundo";

    printf("%s", ft_strchr(letters, 'a'));
    return(0);
}
busca la primera aparicion del caracter "c" en la cadena "str"
    RETORNA a partir desde la aparicion del caracter que buscamos
*/