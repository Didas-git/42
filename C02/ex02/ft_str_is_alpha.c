unsigned char	is_alphabetic(char c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alphabetic(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
