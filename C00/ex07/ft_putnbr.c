#include <unistd.h>

void	print(char str[], char start)
{
	while (start < 16)
	{
		write(1, (str + start), 1);
		start++;
	}
}

void	hundred_loop(char str[], int *a, char *index)
{
	while (*a >= 100)
	{
		*index -= 2;
		*(str + *index) = (char) '0' + (((char)(*a % 100)) / 10);
		*(str + *index + 1) = (char) '0' + (((char)(*a % 100)) % 10);
		*a = *a / 100;
	}
}

void	fill_smaller(char str[], int *a, char *index)
{
	if (*a < 10)
	{
		*index -= 1;
		*(str + *index) = (char) '0' + (char)*a;
	}
	else
	{
		*index -= 2;
		*(str + *index) = (char) '0' + (((char)(*a % 100)) / 10);
		*(str + *index + 1) = (char) '0' + (((char)(*a % 100)) % 10);
	}
}

// Why, just why
// C provides itoa and snprintf
// Either way, this implementation is based of
// of zig's std implementation for `fmt.formatInt`
void	ft_putnbr(int nb)
{
	char	str[16];
	char	index;
	int		a;

	index = 16;
	if (nb < 0)
	{
		a = -nb;
	}
	else
	{
		a = nb;
	}
	hundred_loop(str, &a, &index);
	fill_smaller(str, &a, &index);
	if (nb < 0)
	{
		index -= 1;
		*(str + index) = '-';
	}
	print(str, index);
}