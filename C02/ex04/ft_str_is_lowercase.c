unsigned char	is_lower(char c)
{
	return (c > 96 && c < 123);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lower(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
