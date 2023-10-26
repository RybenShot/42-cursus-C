#include "libft.h"

// crea un array llamado "ft_lstnew", dentro tiene en "content" UN PUNTERO al inicio de lo que le hemos pasado
t_list	*ft_lstnew(void *content)
{
// crea una nueva lista llamada "new" ...
	t_list	*new;

// que apunta al ARRAY/ESTRUCTURA que este mismo crea con malloc en el que dentro tiene los valores pasados por la plantilla de t_list (declaramos la "plantilla" de t_list en el libft.h)
// Reserva memoria para un nuevo nodo de lista y almacena la dirección en 'new'
	new = malloc(sizeof(t_list));

//Prev de ERROR
	if (!new)
		return (NULL);

// Asigna el valor de 'content' al campo 'content' del nuevo nodo.
	new->content = content;
// Establece el campo 'next' del nuevo nodo como NULL, ya que es el último nodo de la lista. 
// (recuerda que en el caso anterior aparecio "new" como segundo valor, pero en este nuevo valor dentro de "new" aparece "next", por la plantilla que le pasamos de t_list)
	new->next = NULL;
// Retorna la dirección del nuevo nodo.
	return (new);
}

int main()
{
    // Crear un nodo de lista
    int value = 42;
    // llamamos a la funcion
    t_list *node = ft_lstnew(value);

    // Verificar si la creación del nodo fue exitosa
    if (node != NULL)
    {
        // Imprimir el contenido del nodo
        printf("El contenido del nodo es: %d\n", *(int *)node->content);

        // Liberar la memoria del nodo
        free(node);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }

    return 0;
}
