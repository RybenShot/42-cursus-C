/* añade el nodo new al final de la lista **lst */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
  // si lst existe, osea no es una lista vacia ...
	if (*lst)
  // llega hasta el final de la lista con la funcion de antes y mete la nueva en su apartado "next"
		(ft_lstlast(*lst))->next = new;
    
  // si llega aqui esque se le habia pasado una lista vacia
	else
		*lst = new;
}