/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:46:17 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/11 17:05:14 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swap;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[y];
		tab[y] = swap;
		x++;
		y--;
	}
}
