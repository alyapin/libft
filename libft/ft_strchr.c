/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:12:52 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 17:11:15 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *res;

	res = (char*)s;
	while (*res && *res != c)
		res++;
	if (res == '\0' && c == '\0')
		return (res);
	else if (*res == c)
		return (res);
	return (NULL);
}
