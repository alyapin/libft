/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:59:18 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 19:06:27 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmerge(t_list *lst1, t_list *lst2)
{
	t_list *tmp;

	if (!lst2 && lst1)
		return (lst1);
	else if (!lst1 && lst2)
		return (lst2);
	else if (!lst1 && !lst2)
		return (NULL);
	tmp = lst1;
	while (lst1->next)
		lst1 = lst1->next;
	lst1->next = lst2;
	return (tmp);
}
