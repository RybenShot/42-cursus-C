/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:06 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 15:23:11 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0); 
}
/*int main ()
{
    char letter = 'g';
    //int number = 4;

    printf("%d", ft_isalnum(letter));
    return (0);
}*/
/*
Comprobamos si el caracter esta entre la tabla de AScii de PRINTABLE
    - True = 1
    - False = 0
*/