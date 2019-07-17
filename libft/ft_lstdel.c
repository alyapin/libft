/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:11:34 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 22:36:51 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *dl;
	t_list *clr;

	if (!alst || !(*del))
		return ;
	dl = *alst;
	while (dl)
	{
		clr = dl;
		dl = clr->next;
		(*del)(clr->content, clr->content_size);
		free(clr);
		*alst = NULL;
	}
}
