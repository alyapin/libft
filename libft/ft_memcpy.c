/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:11:09 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 18:20:36 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *res;
	unsigned char *sr;

	if (!dst && !src)
		return (NULL);
	res = (unsigned char*)dst;
	sr = (unsigned char*)src;
	while (n-- > 0)
		*res++ = *sr++;
	return (dst);
}
