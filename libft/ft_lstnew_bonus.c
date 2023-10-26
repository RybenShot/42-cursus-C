/* crea un nuevo nodo */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNodo;

	newNodo = malloc(sizeof(t_list));

	if (!newNodo)
		return (NULL);

	newNodo->content = content;
	newNodo->next = NULL;
	return (newNodo);
}