/* añade el nodo "new" al principio de la lista, para que el ultimo nodo añadido aparezca el PRIMERO de la lista */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}


/*Codigo para verlo en python tutor*/
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura t_list
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

// Prototipo de la función ft_lstadd_front
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main()
{
    // Crear un nodo de lista con contenido
    int value1 = 42;
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = &value1;
    node1->next = NULL;

    // Crear un nodo de lista adicional
    int value2 = 99;
    t_list *node2 = malloc(sizeof(t_list));
    node2->content = &value2;
    node2->next = NULL;

    // Crear una nueva lista y agregar el primer nodo
    t_list *lista = node1;

    // Agregar un nuevo nodo al principio de la lista
    ft_lstadd_front(&lista, node2);

    // Imprimir la lista resultante
    t_list *temp = lista;
    while (temp != NULL)
    {
        printf("Contenido del nodo: %d\n", *(int *)(temp->content));
        temp = temp->next;
    }

    // Liberar la memoria de los nodos y la lista
    free(node1);
    free(node2);

    return 0;
}
