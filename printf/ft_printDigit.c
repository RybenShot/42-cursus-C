#include "ft_printf.h"

int ft_printDigit (int digit)
{
  long counter;
  
  counter = 0;
  
  if (digit == -2147483648)
	{
		ft_printString("-2147483648");
		return (11);
	}
  if (digit < 0)                              //1- si el numero es menor de 0 (numeo negativo) ...
  {
    counter += ft_printChar('-');             //2- imprimimos un '-'...
    digit *= -1;                              //3- reasignamos la variable digit, pasando los digitos a positivo(para poder manejarlos bien)
  }
  if (digit > 9)                              //4- si la variable es mayor de 9 (tiene 2 cifras, para poder imprimirlo bien lo tenemos que hacer de 1 en 1)...
  {
    counter += ft_printDigit(digit / 10);     //5- Dividimos el nuemor entre 10 (para correr 1 cifra atras(empezando a leer de derecha a izquierda)) y autoinvozamos de nuevo la funcion
    // por ejemplo , si la variable tiene valor 23434
    // invocariamos la funcion ahora con 2343, llegariamos a la misma parte y al ser de nuevo mayor de 9, 
    // volveriamo a hacer al autoinvocacion, pero ahora con 234
    // luego volveria con 23
    // y por ultimo 2 (ahora SI tenemos solo 1 cifra, ahora pasaremos a imprimirla(paso 6))    
    counter += ft_printDigit(digit % 10);     //7- despues de haber impreso la primera cifra, autoimbocariamos esta funcion para enviar a imprimir las siguientes cifras
    // ahora por ejemplo imprimiria (gracias a la funcion de abajo), el numero 3
    // luego volveria con el numero 4 y asi hasta imprimir todos los numero 1 a uno
  }
  else
    counter += ft_printChar(digit + '0');     //6- Aqui llegariamos solo cuando las anteriores comprovaciones sea FALSAS
    // al tener ahora solo 1 digito (el 2) , enviamos a imprimir, (si esta es al primera vez que llega aqui, pasaria a la parte 7)
    
  return counter;
}
 