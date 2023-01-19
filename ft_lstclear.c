#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*del_node;
	t_list	*temp_node;

	if(lst == NULL || del == NULL)
		return ;
	del_node = *lst;
	while (del_node)
	{
		temp_node = del_node;
		del_node = del_node->next;
		(*del)(temp_node->content);
		free(temp_node);
	}
	*lst = NULL;
}
