/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:13:47 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 15:56:31 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *res;
	unsigned char *sr;
	unsigned char s;

	res = (unsigned char*)dst;
	sr = (unsigned char*)src;
	s = (unsigned char)c;
	while (n--)
	{
		if (*sr == s)
		{
			*res++ = *sr;
			return (res);
		}
		*res++ = *sr++;
	}
	return (NULL);
}
