/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:27 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 15:22:31 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum( int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || ( c >= 48 && c <= 57))
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
Comprobamos si lo que miramos es alfabeto o numero
    - True = 1
    - False = 0
*/