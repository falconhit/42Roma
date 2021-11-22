unsigned int	ft_len(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	j;

	j = 0;
	idx = ft_len(dest);
	if (size <= idx)
		return (size + ft_len(src));
	else
	{
		while (src[j] != '\0' && idx < (size - 1))
		{
			dest[idx] = src[j];
			idx++;
			j++;
		}
		dest[idx] = '\0';
		return (ft_len(dest) + ft_len(&src[j]));
	}
}
