/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:19:14 by kzina             #+#    #+#             */
/*   Updated: 2019/04/12 20:13:45 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_putnbrm(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = nb % 1000000000;
		}
		return (nb * -1);
	}
	else
		return (nb);
}

void			ft_putnbr(int n)
{
	int nb;
	int i;
	int ch;

	i = 1;
	nb = ft_putnbrm(n);
	n = nb;
	while (n > 9)
	{
		n /= 10;
		i *= 10;
	}
	while (i > 1)
	{
		ch = nb / i;
		nb = nb - ch * i;
		i /= 10;
		ft_putchar(ch + '0');
	}
	ft_putchar(nb + '0');
}
