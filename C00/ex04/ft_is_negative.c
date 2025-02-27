#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'P';
	if (n < 0)
	{
		sign = 'N';
	}
	write(1, &sign, 1);
}
