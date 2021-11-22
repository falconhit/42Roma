/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancarbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:36:29 by ancarbon          #+#    #+#             */
/*   Updated: 2021/10/13 14:37:21 by ancarbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	if (n == 0)
		return (0);
	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx] && idx < n)
		idx++;
	if (idx == n)
		idx--;
	return (s1[idx] - s2[idx]);
}
