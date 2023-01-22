/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsbadal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:06:35 by arsbadal          #+#    #+#             */
/*   Updated: 2023/01/20 22:06:36 by arsbadal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp_node = *lst;
	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = new;
}
