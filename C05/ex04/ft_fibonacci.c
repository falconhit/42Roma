/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:19:48 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/18 11:26:22 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (n);
	}
	else
		return (-1);
}
