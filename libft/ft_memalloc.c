/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:39:49 by kzina             #+#    #+#             */
/*   Updated: 2019/04/10 18:54:07 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;
	int		i;

	i = 0;
	res = malloc(size);
	if (res == NULL)
		return (res);
	ft_bzero(res, size);
	return (res);
}
