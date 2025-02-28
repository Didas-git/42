// This is a slightly optimized version of bubble sort
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size > 1)
	{
		i = 1;
		while (i < size)
		{
			if (*(tab + i - 1) > *(tab + i))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + i - 1);
				*(tab + i - 1) = temp;
			}
			i++;
		}
		size--;
	}
}
