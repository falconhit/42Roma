/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:57:45 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/18 11:19:03 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (nb == 0 || power == 0)
		return (1);
	if (n > 1 && power > 1)
	{
		n = n * ft_recursive_power(n, (power - 1));
	}
	return (n);
}
