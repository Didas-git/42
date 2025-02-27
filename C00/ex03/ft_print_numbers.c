#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 0x30;
	while (c < 0x3A)
	{
		write(1, &c, 1);
		c++;
	}
}
