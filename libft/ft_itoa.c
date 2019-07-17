/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:42:57 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:07:44 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_itoa_put(char *res, int n, long ten)
{
	int nb;
	int i;

	i = 0;
	while (ten > 1)
	{
		nb = n / ten;
		n = n - nb * ten;
		ten /= 10;
		res[i++] = nb + '0';
	}
	res[i++] = n + '0';
	res[i] = '\0';
}

static	char	*ft_itoa_neg(int n, char *res, long ten)
{
	int j;

	j = 0;
	res[j++] = '-';
	if (n == MIN_INT)
	{
		res[j++] = '2';
		n = n % 1000000000;
		ten /= 10;
	}
	n = ft_abs(n);
	ft_itoa_put(&res[j], n, ten);
	return (res);
}

char			*ft_itoa(int n)
{
	char	*res;
	long	ten;
	int		nb;
	int		i;

	nb = n;
	ten = 1;
	i = 0;
	while (ft_abs(nb) > 9)
	{
		nb /= 10;
		ten *= 10;
		i++;
	}
	if (n < 0)
		res = (char*)malloc(sizeof(char) * (i + 3));
	if (n >= 0)
		res = (char*)malloc(sizeof(char) * (i + 2));
	if (!res)
		return (NULL);
	if (n < 0)
		return (ft_itoa_neg(n, res, ten));
	ft_itoa_put(res, n, ten);
	return (res);
}
