/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:52:42 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 18:57:20 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list *lst, void *content, int (*cmp)(void*, void*))
{
	t_list *tmp;

	if (!lst || !(*cmp))
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		if ((*cmp)(tmp->content, content) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
