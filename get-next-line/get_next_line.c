#include "get_next_line.h"

// Funcion para leer el archivo
char get_read(char *str, int fd)
{
	int 		read;
	char 		*memTemporal;

	read = 1;
	memTemporal = ()
}

/*Creamos una reserva de memoria que recoja la informacion de lo que vaya a guardar y no ha leido, 
para despues seguir leyendolo que sera nuestro buffer*/
char *get_next_line(int fd){
	char 		*line;
	static char	*buffer;

	//1. Verificamos que nos haya dado un fd valido y que nos haya dado un BUFFER_SIZE posible (para que no rompa la funcion) ya que sino no deberia de funcionar
	//? RECUERDA el buffer_size lo sacas del .h     fd == file descriptor 
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (0);

	//2. Leemos dandole el almacenaje y el fd
	buffer = get_read(buffer, fd);
	//3. si no ha conseguido generar el elemento de lo leido, termina la funcion
	// 		si ha salido bien debe dar lo leido
	if(!buffer)
		return (0);
	line = ft_get_the_line(buffer);
	buffer = ft_new_line(buffer);

	return (line);
}



/*
 * Función para obtener la próxima línea de un descriptor de archivo (file descriptor - fd)
 * Parámetros:
 *   - fd: descriptor de archivo del cual leer la próxima línea
 * Retorna:
 *   - Puntero a la línea leída, o NULL si no se pudo leer o si llegamos al final del archivo
 */
char *get_next_line(int fd)
{
	// Declaramos variables
	char *line; // Puntero para almacenar la línea leída
	int i;      // Índice para recorrer la línea
	int read_result;      // Variable para almacenar el resultado de la lectura

	// Inicializamos el índice y el resultado de la lectura
	i = 0;
	read_result = 0;

	// Asignamos memoria para almacenar la línea, con un tamaño igual al tamaño del buffer definido
	line = malloc(sizeof(char) * BUFFER_SIZE);
	if (!line) // Verificamos si se pudo asignar memoria
		return (NULL); // Si no, retornamos NULL

	// Leemos del descriptor de archivo hasta encontrar un salto de línea o llegar al final del archivo
	while ((read_result = read(fd, &line[i], 1)) > 0)
	{
		if (line[i] == '\n') // Si encontramos un salto de línea
			break; // Salimos del bucle de lectura
		i++; // Incrementamos el índice para seguir leyendo caracteres
	}

	//! Este caso es por si el archivo no tiene absolutamente nada sin que haya habido ningun error de lectura
	// esta verificación es una forma de asegurarse de que el archivo realmente está vacío y no hay ningún contenido que leer (pero el archivo esta bien[solo que esta simplemente vacio])
	if (read_result == 0 && i == 0)
	{
		free(line); // Liberamos la memoria asignada para la línea
		return (NULL); // Retornamos NULL, indicando que no se pudo leer nada
	}

	// Agregamos el carácter nulo al final de la línea para terminarla
	line[i] = '\0';

	// Retornamos el puntero a la línea leída
	return (line);
}
