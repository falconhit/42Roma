/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:48:09 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/09 17:09:56 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;

	n = 1 + size - size;
	while (n++ < size)
	{
		if (tab[n] < tab[n - 1])
		{
			ft_swap(&tab[n - 1], &tab[n]);
			n = 0;
		}
	}
}
