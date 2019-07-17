/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:45:05 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:24:50 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = (char*)malloc(len + 1);
	if (res != NULL)
	{
		while (len-- > 0)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
