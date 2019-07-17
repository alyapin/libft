/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:06:02 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 22:16:29 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *dl;

	if (!alst || !(*del))
		return ;
	dl = *alst;
	(*del)(dl->content, dl->content_size);
	free(dl);
	*alst = NULL;
}
