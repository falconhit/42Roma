/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:50:04 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/05 11:24:21 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_commaspace(void)
{
	char	x;
	char	y;

	x = ',';
	y = ' ';
	ft_putchar(x);
	ft_putchar(y);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (a++ <= '7')
	{
		b = a;
		while (b++ <= '8')
		{
			c = b;
			while (++c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < '7')
				{
					ft_commaspace();
				}
			}
		}
	}
}
