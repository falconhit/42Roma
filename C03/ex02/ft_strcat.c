/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:32:00 by ancarbon          #+#    #+#             */
/*   Updated: 2021/10/13 14:30:13 by ancarbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	idx;
	unsigned int	s;

	idx = 0;
	s = 0;
	while (dest[idx])
		idx++;
	while (src[s])
	{
		dest[idx + s] = src[s];
		s++;
	}
	dest[idx + s] = '\0';
	return (dest);
}
