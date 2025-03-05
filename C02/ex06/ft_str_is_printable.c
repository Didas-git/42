unsigned char	is_print(char c)
{
	return (!(c <= 0x1F || c == 0x7F));
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_print(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
