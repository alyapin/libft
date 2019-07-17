/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:39:41 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 18:18:49 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !(*f))
		return (NULL);
	if (!(head = (*f)(lst)))
		return (NULL);
	tmp = head;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = (*f)(lst)))
			return (NULL);
		tmp = tmp->next;
	}
	return (head);
}
