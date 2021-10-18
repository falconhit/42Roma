/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:40:48 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/05 11:24:59 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_compile(char n1, char n2, char n3, char n4)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
	ft_putchar(n3);
	ft_putchar(n4);
	if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0' - 1;
	while (++n1 <= '9')
	{
		n2 = '0' - 1;
		while (++n2 <= '9')
		{
			n3 = n1 - 1;
			n4 = n2;
			while (++n3 <= '9')
			{
				while (++n4 <= '9')
				{
					ft_compile(n1, n2, n3, n4);
				}
				n4 = '0' - 1;
			}
		}	
	}
}
