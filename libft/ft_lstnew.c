/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:50:19 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 22:11:11 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (new)
	{
		if (!content)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			if (!(new->content = malloc(content_size)))
				return (NULL);
			new->content = ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}
