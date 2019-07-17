/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 22:58:42 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 17:07:18 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long		i;
	unsigned long		j;
	size_t				n;

	i = 0;
	j = 0;
	n = ft_strlen(src) + ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i] != '\0')
		i++;
	size -= ft_strlen(dst);
	while (src[j] != '\0' && size-- > 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (n);
}
