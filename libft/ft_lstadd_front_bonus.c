/* añade el nodo "new" al principio de la lista, para que 
el ultimo nodo añadido aparezca el PRIMERO de la lista */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}