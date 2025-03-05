unsigned char	is_upper(char c)
{
	return (c > 64 && c < 91);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_upper(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
