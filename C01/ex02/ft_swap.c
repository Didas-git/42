// This uses the xor trick instead of
// the standard practice of `a, b = b, a`
void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
