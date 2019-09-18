/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:30:57 by kzina             #+#    #+#             */
/*   Updated: 2019/08/07 18:05:03 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_count_word(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		while (*str && *str != c)
			str++;
		if (*str == c || (*str == '\0' && *(str - 1) != c))
			count++;
	}
	return (count);
}

static	int		ft_strlenc(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static	int		ft_strfill(char const *str, char *res, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;
	int		j;

	if (!s || !c)
		return (NULL);
	i = 0;
	j = 0;
	count = ft_count_word(s, c) + 1;
	res = (char**)malloc(sizeof(char*) * count);
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j++] = (char*)malloc(sizeof(char) * (ft_strlenc(&s[i], c) + 1));
			i += ft_strfill(&s[i], res[j - 1], c);
		}
		else if (s[i] == c)
			i++;
	}
	res[count - 1] = NULL;
	return (res);
}
