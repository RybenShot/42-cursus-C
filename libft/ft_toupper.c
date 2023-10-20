/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:49:55 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 15:50:03 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return(c);
}
/*int main()
{
    printf("%d", ft_toupper('a'));
    return (0);
}
pasa el caracter de minuscula a mayuscula
    RETORNA el caracter en mayuscula
*/