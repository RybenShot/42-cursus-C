/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:14:24 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 15:22:27 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_digit(int arg)
{
    arg += '0'; // lo pasasmos a codigo Ascii el numero para comprobar que es un numero segun el codigo ascii

    if (arg >= 48 && arg <= 57)
        return (1);
    else
        return (0);
}
/*int main ()
{
    char number = '6';

    ft_digit(number);
    return (0);
}
 chequea si lo que pasamos es un numero
    - True = 1
    - False = 0
*/