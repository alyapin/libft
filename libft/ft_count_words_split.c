/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_split.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:35:35 by kzina             #+#    #+#             */
/*   Updated: 2019/04/13 18:39:43 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words_split(char const *str, char c)
{
	int count;

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
