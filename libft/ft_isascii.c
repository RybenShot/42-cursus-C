/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:19:41 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 10:24:36 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main ()
{
    char letter = 'g';
    //int number = 4;

    printf("%d", ft_isascii(letter));
    return (0);
}
 comprobamos si lo que miramos esta dentro del codigo ASCII
    - True = 1
    - False = 0
*/
