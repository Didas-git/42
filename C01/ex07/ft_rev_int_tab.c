void	ft_rev_int_tab(int *tab, int size)
{
	char	half;
	char	i;
	int		temp;

	half = size / 2;
	i = 0;
	while (half % 2 != 1)
	{
		half = half - 1;
	}
	while (half > 0)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + (size - 1 - i));
		*(tab + (size - 1 - i)) = temp;
		half--;
		i++;
	}
}
