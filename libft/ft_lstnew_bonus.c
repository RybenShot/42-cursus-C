/* crea un nuevo nodo */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnodo;

	newnodo = malloc(sizeof(t_list));
	if (!newnodo)
		return (NULL);
	newnodo->content = content;
	newnodo->next = NULL;
	return (newnodo);
}