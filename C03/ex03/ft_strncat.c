/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:43:27 by ancarbon          #+#    #+#             */
/*   Updated: 2021/10/14 19:35:58 by ancarbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idx;
	unsigned int	s;

	idx = 0;
	s = 0;
	while (dest[idx])
		idx++;
	while (src[s] && s < nb)
	{
		dest[idx + s] = src[s];
		s++;
	}
	dest[idx + s] = '\0';
	return (dest);
}
