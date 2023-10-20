#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;                             // cambiamos a long para poder imprimir nuemros grandes
	if (nb < 0)                         // si el numero es negativo ...
	{
		ft_putchar_fd('-', fd);         // imprime por pantalla un guion (el negativo)
		nb *= -1;                       // y con esta multiplicacion pasamos el numero a positivo(asi podemos imprimir el primer nuemro 
                                        // y hacer operaciones(porque con numero negativos no se puede operar))
	}
	if (nb >= 10)                       // si el numero es mayor de 9, tendremos que ir imprimiento numero por numero
	{
		ft_putnbr_fd(nb / 10, fd);      // gracias a esta funcion, vamos de izquierda a derecha buscando el primer valor
                                        // auto inbocando la funcion hasta llegar al primer valor
                                        // y a su vez dividiendo el numero en -1, de la izquierda, por ejemplo:
        // en la primera pasada hasta aqui se inbocaria a 34247
        // en la segunda 3424
        // en al tercera 342
        // en la cuarta 34
        // en la quinta 3, asi que al ser ahora "nb" un numero inferior a 10, pasaria a la siguiente funcion, ft_putchar_fd y lo imprimiria
        // despues pasaria a la funcion siguiente, que es al misma que esta pero quedandose con el RESTO de la division de 34 / 10, osea 4, voilveria a hacer la funcion pero como solo tenemos un 4, lo imprime y ya esta
        // al volver al bucle de 342, los dos primeros caracteres ya se han impreso asi que solo queda por imprimir el 2 que lo sacamos gracias a quedarnos el RESTO de la operacion de 342 / 10, que nos dara, 2, asi que lo imprimimos
        // con el 4, hariamos lo mismo, sacarlo gracias al resto
        // igual con el 7 y el 4, y ya tendriamos el numeor completo
        // lo importante de esta funcion es llegar al primer caracter DESDE LA IZQUIERDA, para luego gracias al RESTO, imprimir cada caracter, deshaciendo la autoimbocacion
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);    // aqui imprimimos cada numero
}

void main()
{
    int number = 342474;

    ft_putnbr_fd(number, 1);

   return;
}

/* 
imprime un numero entero, sea positivo o negativo

RESUMEN. para los numeros largos, primero llegamos al primer numuero desde la izquierda, dividiendo y autoimbocando (con un caracter menos desde la izquierda) la misma cadena de numero
 hasta autoimbocar solo 1 numero, se imprime y a aprtir de aqui empezamos a escribir cada numero gracias a quedarnos el RESTO de la division de los numeros ya imprimidos entre 10
 por ejemplo digamos que queremos imprimir 42
    primero dividiremos 42 / 10, 4 y lo imprimimos
    luego para imprimir el 2, nos quedamos con el RESTO  de la division de 42 / 10, 2 y lo imprimimos
otro ejemplo, 123
    primero invocamos la funcion con el numero 123 / 10, 12
    volvemos a invocar la funcion con el numero 12 / 10, 1
    imprimimos el 1
    invocamos la funcion con el RESTO de la division de 12 / 10, 2
    imprimimos el 2
    invocamos la funcion con el RESTO de la division de 123 / 10, 3
    imprimimos el 3
    find e la funcion
*/