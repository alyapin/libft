/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:30:42 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 16:47:32 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *res;

	res = (unsigned char*)s;
	while (n--)
	{
		if (*res == (unsigned char)c)
			return (res);
		res++;
	}
	return (NULL);
}
