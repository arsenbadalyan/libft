#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp_node = *lst;
	*lst = new;
	new->next = temp_node;
}
