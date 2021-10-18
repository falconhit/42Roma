/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:31:31 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/18 12:21:43 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = (nb / 2);
	while (n > 1)
	{
		if (nb % n == 0)
			return (0);
		else
			n--;
	}
	if (n == 1)
		return (1);
	else
		return (0);
}
