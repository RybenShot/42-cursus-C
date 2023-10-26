/* aplica la funcion "f" a cada elemento(content) de la lista enlazada(lst)   */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
    // Llama a la función 'f' con el contenido del nodo actual como argumento
		f(lst->content);
    // Avanza al siguiente nodo de la lista
		lst = lst->next;
	}
}