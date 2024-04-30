/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejimene <sejimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:50:28 by sejimene          #+#    #+#             */
/*   Updated: 2023/10/12 11:50:28 by sejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char	*str;                         // declaramos un puntero que lo usaremos posteriormente

	if (!s)                             // si no existe la variable que le pasamos o simplemente esta vacia
		return (NULL);                    // corta 

	if (ft_strlen(s) <= start)          // si la longitud de la variable que le pasamos es menor o igual que desde donde tiene que empezar...
		return (ft_strdup(""));           // CREA una memoria vacia

    //            en este supuesto ejemplo digamos que le pasan esta funcion ---> ft_substr(letters, 2, 8) <---  esto quiere decir "copiame de esta variable XXX caracteres empezando desde el 2"    
    //                                                                          original                  [H][o][l][a][][w][e][y]     
    //                                                                          copia MD                        [l][a][][w][e][y][X][X] (el resto que quena no se debe copiar, porque son datos ajenos)

	if (ft_strlen(s) - start < len)     // si la longitud de la variable - start (para prevenir si la cantidad de bytes que tiene que copiar es superior a la que le queda) 
                                      // ES MENOR a la cantidad de bytes que tiene que crear (recuerda que esta creando una nueva variable a partir de otra)
		len = ft_strlen(s) - start;       // la longitud se REASIGNA a la longitud de la variable "s" - start // PORQUE? para prevenir de que se copien bytes de otras variables
	str = (char *)malloc(len + 1);      // si llega aqui este hay hueco suficiente para copiar lo que dice // En el str, ve haciendo hueco que se han pedido con el 'len'

	if (!str)                           // Prev de ERROR // si str, esta vacio (osea que en el len se le ha metido un 0 y solo ha quedado el fin del string)...
		return (NULL);                    // corta ejecucion

//               ┌-------┐ al poner esto, no solo le estamos pasando la variable para que opere con ella sino que encima le estamos dando un inicio diferente, gracias al "start" va a empezar a revisar desde donde diga "start"
	ft_memcpy(str, s + start, len);     //Si llega aqui es porque hay al menos 1 hueco disponible 
																			// va a copiar en "str" lo que haya en "s", y va a copiar tantos caracteres como "len" diga
	str[len] = '\0';                    // Y al final le pone la ginda

	// oooo podrias hacerlo con esta funcion
	// ft_strlcpy(str, s + start, len + 1);
	return (str);                       // RETORNA EN MD lo que haya en str 
}

int main ()
{
  char letters[] = "hola caracola";

  printf("%s", ft_substr(letters, 2, 4));
  return 0;
}

/* 
asigna MD a una string creada a partir del indice (start) de "s" con la longitud "len" 
*/