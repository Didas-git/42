// This uses the xor trick instead of
// the standard practice of `a, b = b, a`
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
