/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:24:22 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/18 12:28:47 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	n = (nb / 2);
	while (n > 1)
	{
		if (nb % n == 0)
			return (0);
		else
			n--;
	}
	return (1);
}
int ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

#include <stdio.h>
int main()
{
        printf("13 - %d\n", ft_find_next_prime(13));
        printf("9 - %d\n", ft_find_next_prime(9));
        printf("4 - %d\n", ft_find_next_prime(4));
        printf("3456 - %d\n", ft_find_next_prime(3456));
        printf("120 - %d\n", ft_find_next_prime(120));
        printf("10 - %d\n", ft_find_next_prime(10));
        printf("1 - %d\n", ft_find_next_prime(1));
}
