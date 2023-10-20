/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:03:42 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/11 11:10:07 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_space(char a)
{
    if(a == " " || a == '\f' || a == '\r')
        return(1);
    if (a == '\n' || a == '\t' || a == '\v')
        return(1);
    return(0);
}
static int ft_symbol(char c)
{
    if (c == '-' || c == '+')
        return(1);
    return(0);
}

int ft_atoi(const char *str)
{
    int i;
    int nmb;
    int symbol;

    i = 0;
    nmb = 0;
    symbol = 1;
    
    if (str == '\0')
        return(0);
    
    while(ft_space(str[i] != 0))
        i++;
    
    while (ft_symbol(str[i] != 0))
    {
        if (str[i] == '-')
            symbol = -symbol;
        i++;
    }
}
int main ()
{
    char numbers[] = "42_3456";
    printf("d", ft_atoi(numbers));
    return(0);
}
