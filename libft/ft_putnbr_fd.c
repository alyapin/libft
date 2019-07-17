/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:31:55 by kzina             #+#    #+#             */
/*   Updated: 2019/04/10 22:33:33 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_putnbrm_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nb = nb % 1000000000;
		}
		return (nb * -1);
	}
	else
		return (nb);
}

void			ft_putnbr_fd(int n, int fd)
{
	int nb;
	int i;
	int ch;

	i = 1;
	nb = ft_putnbrm_fd(n, fd);
	n = nb;
	while (nb > 9)
	{
		nb /= 10;
		i *= 10;
	}
	while (i > 1)
	{
		ch = n / i;
		n = n - ch * i;
		i /= 10;
		ft_putchar_fd(ch + '0', fd);
	}
	ft_putchar_fd(n + '0', fd);
}
