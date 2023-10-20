#include <string.h>

static int	ft_numberlen(long n)
{
	int	c = 0;            // generamos un iterador
  // COMPRUEBA NEGATIVO O POSITIVO
	if (n < 0)            // si el numero pasado es MENOR de 0(significa que es un numero negativo Numero negativo)
  // esta parte es para comprovar si el numero el NEGATIVO (en tal caso se pasa a positivo) o es POSITIVO
	{
		c++;                // iteramos el c
		n = -n;             // trasnformamos el - a positivo (porque cuando le restas a un numero negativo, cancelas el negativo)
		ft_numberlen(n);    // y llamas de nuevo a la misma funcion, OJO!!!, gracias a esto contaremos el simbolo de NEGATIVO
	}
  // COMPRUEVA SI ES 0
	if (n == 0)
	{
		c++;                // al tener un digito, lo contamos
		return (c);         // RETORNA NUMERO DE DIGITOS
	}
  // CUENTA CUANTOS DIGITOS TIENE
	while (n > 0)         // si n es mayor de 0
	{
		n = n / 10;         // Divide entre 10, asi le quitamos 1 numero , asi hasta que no queden mas numeros
		c++;                // iteramos
	}
	return (c);           // RETORNA NUMERO DE DIGITOS
}

char *ft_itoa(int n)
{
	long	nmb = (long)n;                                        // declaramos una variable numerica (el "long" esta preparado para albergar una gran valor numerico) en alq ue le metemos el numero que nos han pasado por funcion
  long	len = ft_numberlen(nmb);                              // Cuenta el Numero de digitos que tiene
	char	*str = (char *)malloc(sizeof (char) * (len + 1));     // Creamos una MD con tantos bytes como diga "len"
 
	if (!str)                                                   // Prev de ERROR
		return (NULL);

	if (nmb < 0)                                                // si el numero que le pasamos fuera negativo ...
	{
		str[0] = '-';                                             // metemos en str[0] un "-"
		nmb = -nmb;                                               // y transformamos el numero a positivo
	}

	if (nmb == 0)                                               // si fuera igual a 0
		str[0] = '0';                                             // metemos en str[0] un "0"
	str[len--] = '\0';                                          // al final YA ponemos la guinda \0 yyyyyy luego le restamos -1 a len(para ir metiendo los numeros)

  // introducimos los numeros desde izquierda a derecha
	while (nmb > 0)                                             // si el numero que le pasamos es mayor de 0(OJO!!! aqui entrarian tambien si le pasamos numeros negativos ya que anteriormente lo trasnformamos a positivos)
	{
		str[len] = nmb % 10 + 48;                                 // metemos en la casilla indicada el numero ya combertido en "char"
		nmb = nmb / 10;                                           // le quitamos el ultimo numero
		len--;                                                    // iteramos el len para que pase el siguiente numero
	}
	return (str);                 // RETORNA la nueva cadena en char con los numeros
}

int main ()
{
  char number = -100;

  printf("%s", ft_itoa(number));
  return(0);
}


Creamos tres variables: 
  una para conocer la dimensión del entero, 
  otra para modificarla a tipo 'long' 
  y una reserva de memoria.
Calculamos la dimensión del valor con la función 'ft_numberlen' y creamos la reserva de memoria con las dimensiones +1 para el carácter nulo. 
Comprobamos que se haya creado correctamente y verificamos si es negativo para introducir el '-' en la primera posición, pasando el valor a positivo para continuar.
Comprobamos si es '0', porque en ese caso, la primera posición sería '0' y colocamos el carácter nulo en la siguiente posición para finalizar.
Si es mayor que 0, en un bucle colocaremos en la memoria el resto de la división del número por 10 para comenzar desde el final, sumando '0/48' para convertirlo en un número. 
Para avanzar en el bucle, reduciremos el número dividiéndolo por 10 y restando su dimensión para colocarlos hasta que la posición alcance 0.
