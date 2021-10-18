/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:59:18 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/16 13:28:25 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				x;
	char			*hex;

	hex = "0123456789abcdef";
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
		{
			ft_putchar(str[x]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[str[x] / 16]);
			ft_putchar(hex[str[x] % 16]);
		}
		x++;
	}
}
