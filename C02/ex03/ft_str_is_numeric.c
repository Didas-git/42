unsigned char	is_digit(char c)
{
	return (c > 47 && c < 58);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_digit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
