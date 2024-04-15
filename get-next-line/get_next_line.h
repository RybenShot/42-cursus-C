#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 24
# endif

# include <unistd.h>
# include <stdlib.h>

char *get_next_line(int fd);



#endif


/*
unistd -> read - write
stdlib -> malloc - free

BUFFER_SIZE es la cantidad de butes que leera de golpe la funcion.
*/