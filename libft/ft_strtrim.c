/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:13:38 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:26:24 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		q;
	char	*res;

	if (!s)
		return (NULL);
	i = ft_strlen((char*)s) - 1;
	j = 0;
	q = 0;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > j)
		i--;
	res = (char*)malloc(sizeof(char) * (i - j + 2));
	if (!res)
		return (NULL);
	while (j <= i)
		res[q++] = s[j++];
	res[q] = '\0';
	return (res);
}
