/*	cuenta el numero de nodos que hay en la lista *lst */
#include "libft.h"

/*Codigo para verlo en python tutor*/
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura t_list
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int ft_lstsize(t_list *lst)
{
  int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

int main()
{
    // Crear una lista enlazada con tres nodos
    t_list *node1 = malloc(sizeof(t_list));
    int value1 = 42;
    node1->content = &value1;
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    int value2 = 99;
    node2->content = &value2;
    node2->next = NULL;

    t_list *node3 = malloc(sizeof(t_list));
    int value3 = 7;
    node3->content = &value3;
    node3->next = NULL;

    // Construir la lista enlazada
    node1->next = node2;
    node2->next = node3;

    // Calcular el tamaño de la lista utilizando ft_lstsize
    int size = ft_lstsize(node1);

    // Imprimir el tamaño de la lista
    printf("Tamaño de la lista: %d\n", size);

    // Liberar la memoria asignada para los nodos
    free(node1);
    free(node2);
    free(node3);

    return 0;
}

