/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:41:52 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/03 19:50:24 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void ft_bzero(void *str, size_t size)
{
    size_t i;
    char *copysrt;

    i = 0;
    copysrt = (char *)str;

    while(i < size)
    {
        copysrt[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t num, size_t size)
{
    void *p;                            // genera un puntero...
    p = malloc(num *size);              // generamos gracia a malloc un hueco de memoria

    if (p == NULL)                      // comprobacion de error por si el generar la memoria ha salido mal por lo que sea
        return(0);
    else
        ft_bzero(p, (num *size));       // gracias al puntero rellenamos con 0 todos los huecos anteriormente generados
    
    return(p);                          // RETORNA un puntero hacia el hueco de memoria que ha reservado lleno de 0, listo para usarse
}
/*int main ()
{
    printf("p", ft_calloc(2, 6));
    return(0);
}
CREADOR DE HUECOS
    asigna memoria dinamica a una string empezada por valores nulos
    el uso de esta funcion es para crear una memoria TEMPORAL, luego el espacio reservado con calloc se eliminara con "free"
*/