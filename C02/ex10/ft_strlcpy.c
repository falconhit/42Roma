/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:58:11 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/12 11:17:55 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
		x++;
	if (size != 0)
	{
		while (src[y] != '\0' && y < (size - 1))
		{
			dest[y] = src[y];
			y++;
		}
		dest[y] = '\0';
	}
	return (x);
}
