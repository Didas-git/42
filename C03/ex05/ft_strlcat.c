int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src, unsigned int size)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	size = size - len - 1;
	while (i < size && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
