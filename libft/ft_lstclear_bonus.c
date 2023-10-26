/* elimina todos los nodos de una lista y libera la memoria asociada */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
  // usaremos este auxiliar para ir liberando los espacios de memoria
	t_list	*aux;

	while (*lst)
	{
    // actualizadmos la posicion actual de lst (el primer nodo de la lista), para posteriomente liberar este espacio una vez se borre todo
		aux = *lst;
    // borramos el contenido del nodo actual de la lista
		del((*lst)->content);
    // pasamos al siguiente nodo
		*lst = (*lst)->next;
    // liberamos el espacio de memoria
		free(aux);
	}
}