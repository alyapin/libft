/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:18:57 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:19:40 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !(*f))
		return (NULL);
	while (s[i])
		i++;
	res = (char*)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (res)
	{
		while (s[i])
		{
			res[i] = (*f)(s[i]);
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
