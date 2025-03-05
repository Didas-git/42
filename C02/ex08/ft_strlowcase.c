unsigned char	is_upper(char c)
{
	return (c > 64 && c < 91);
}

char	to_lower(char c)
{
	unsigned char	mask;

	mask = is_upper(c) << 5;
	return (c | mask);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_lower(str[i]);
		i++;
	}
	return (str);
}
