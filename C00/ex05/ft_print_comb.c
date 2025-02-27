#include <unistd.h>

void	increment_first(int *i, int arr[])
{
	*arr = *arr + 1;
	*(arr + 1) = *arr + 1;
	*(arr + 2) = *arr + 2;
	*i = *(arr + 1) - 1;
}

void	increment_second(int *i, int arr[])
{
	*(arr + 2) = *(arr + 1) + 2;
	*(arr + 1) = *(arr + 1) + 1;
	*i = *(arr + 1) - 1;
}

void	print(int _x, int _y, int _z)
{
	int	x;
	int	y;
	int	z;

	x = _x | 0x30;
	y = _y | 0x30;
	z = _z | 0x30;
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

// thank you norminette 
int	while_body(int *i, int arr[])
{
	print(*arr, *(arr + 1), *(arr + 2));
	if (*i == 7)
	{
		if (*arr == 7)
		{
			return (-1);
		}
		else if (*(arr + 1) == 8)
		{
			increment_first(i, arr);
		}
		else
		{
			increment_second(i, arr);
		}
	}
	else
	{
		*(arr + 2) = *(arr + 2) + 1;
		(*i)++;
	}
	write(1, ",", 1);
	write(1, " ", 1);
	return (0);
}

// This is meant to be unique not readable
void	ft_print_comb(void)
{
	int	should_break;
	int	m[3];
	int	i;

	should_break = 0;
	i = 0;
	*m = 0;
	*(m + 1) = 1;
	*(m + 2) = 2;
	while (1)
	{
		should_break = while_body(&i, m);
		if (should_break == -1)
		{
			break ;
		}
	}
}
