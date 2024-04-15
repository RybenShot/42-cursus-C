int main (int argc, char **argv)
{
	int 	fd;
	char 	*line;
	int 	counter;

	counter = 0;
	line = 0;

	//1. si no ha pasado ningun archivo ...
	if(argc != 2)
	{
		printf("No has adjuntado ningun archivo <file> \n");
		return (1);
	}

	//2. abrimos en modo lectura el archivo  YY Comprobamos que se haya abierto correctamente
		// si hubiera algun error a la hora de abrir el archivo devuelbe un -1
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		printf("ha habido un error al abrir el archivo \n");
		return (1);
	}

	// 3. Leemos la linea?
	line = get_next_line(fd);
	printf("La cadena leída es \"%s\" \n", line);

	close(fd);
	free(line);
	return 0;
}

/*
Necesitamos usar las funciones Open y Close. 
OPEN abre un fichero existente retornando un file descriptor:

int open(char *nombre, int modo, int permisos);

el nombre es la cadena conteniendo el nombre del fichero que quier abrir.
el modo establece la forma que se va a trabajar:

- O_RDONLY abre en modo lectura.
- O_WRONLY abre en modo escritura.
- 0_RDWR abre en modo lectura-escritura.
- O_CREAT crea el fichero y lo abre (y si existía destruye el previo).

Esta devolverá un descriptor válido si el fichero ha podido abrirlo, sino -1.

Después tendrás que cerrarlo con la función CLOSE.
int close(int fichero);
el fichero es el descriptor de un fichero abierto. Retorna 0 si va bien.

*/