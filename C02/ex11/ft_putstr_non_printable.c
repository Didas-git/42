#include <unistd.h>

unsigned char	is_print(char c)
{
	return (!(c <= 0x1F || c == 0x7F));
}

void	ft_putstr_non_printable(char *str)
{
	const char		charset[16] = "0123456789abcdef";
	unsigned long	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_print(str[i]))
		{
			write(1, "\\", 1);
			write(1, charset + (str[i] >> 4), 1);
			write(1, charset + (str[i] & 15), 1);
		}
		else
		{
			write(1, (str + i), 1);
		}
		i++;
	}
}
