#include <stdio.h>

char	to_lower(char c)
{
	unsigned char	mask;

	mask = (c > 64 && c < 91) << 5;
	return (c | mask);
}

char	to_upper(char c)
{
	unsigned char	mask;

	mask = (c > 96 && c < 123) << 5;
	return (c ^ mask);
}

unsigned char	is_alphanumeric(char c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58));
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned char	previous_counts_as_space;

	i = 0;
	previous_counts_as_space = 1;
	while (str[i] != '\0')
	{
		if (!is_alphanumeric(str[i]))
		{
			previous_counts_as_space = 1;
		}
		else if (previous_counts_as_space)
		{
			str[i] = to_upper(str[i]);
			previous_counts_as_space = 0;
		}
		else
		{
			str[i] = to_lower(str[i]);
		}
		i++;
	}
	return (str);
}
