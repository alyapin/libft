/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:28:29 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:20:40 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

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
			res[i] = (*f)(i, s[i]);
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
