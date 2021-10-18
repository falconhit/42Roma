/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalcone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:39:59 by afalcone          #+#    #+#             */
/*   Updated: 2021/10/12 16:52:14 by afalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_updown(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	ft_updown(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (f == 1)
				str[i] = str[i] - 32;
			f = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			f = 0;
		else
			f = 1;
		i++;
	}
	return (str);
}
