/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:08:19 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 18:21:38 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *res;
	char *sr;

	if (!dst && !src)
		return (NULL);
	res = (char*)dst;
	sr = (char*)src;
	if (res < sr)
	{
		while (len-- > 0)
			*res++ = *sr++;
	}
	else
	{
		res += len;
		sr += len;
		while (len-- > 0)
			*--res = *--sr;
	}
	return (dst);
}
