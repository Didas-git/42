#include <unistd.h>

void	print(int arr[])
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (*arr) | 0x30;
	b = (*(arr + 1)) | 0x30;
	c = (*(arr + 2)) | 0x30;
	d = (*(arr + 3)) | 0x30;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if ((*arr) == 9 && *(arr + 1) == 8 && *(arr + 2) == 9 && *(arr + 3) == 9)
	{
		return ;
	}
	write(1, ",", 1);
	write(1, " ", 1);
}

int	increment_from_index(int arr[], int start)
{
	if (*(arr + (start + 1)) == 9)
	{
		if (*(arr + start) == 9)
		{
			return (-1);
		}
		*(arr + (start + 1)) = 0;
		*(arr + (start)) = *(arr + (start)) + 1;
	}
	else
	{
		*(arr + (start + 1)) = *(arr + (start + 1)) + 1;
	}
	return (0);
}

void	inner_loop(int arr[])
{
	int	should_break;

	should_break = 0;
	while (1)
	{
		should_break = increment_from_index(arr, 2);
		if (should_break == -1)
		{
			break ;
		}
		print(arr);
	}
	*(arr + 2) = 0;
	*(arr + 3) = 0;
}

// This is meant to be unique not readable
void	ft_print_comb2(void)
{
	int	m[4];
	int	i;

	*m = 0;
	*(m + 1) = 0;
	*(m + 2) = 0;
	*(m + 3) = 0;
	i = 0;
	while (i < 99)
	{
		print(m);
		inner_loop(m);
		increment_from_index(m, 0);
		i++;
	}
}
