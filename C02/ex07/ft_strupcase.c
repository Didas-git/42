unsigned char	is_lower(char c)
{
	return (c > 96 && c < 123);
}

char	to_upper(char c)
{
	unsigned char	mask;

	mask = is_lower(c) << 5;
	return (c ^ mask);
}

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_upper(str[i]);
		i++;
	}
	return (str);
}
