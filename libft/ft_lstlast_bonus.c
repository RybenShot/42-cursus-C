/*va al ultimo nodo de la lista *lst*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*RETORNA la posicion de inicio del ultimo nodo*/
/*Se mueve entre los nodos pasando de content en content hasta llegar al ultimo revisando que su apartado "next" tenga un "NULL", lo que significa que ese es el ultimo*/