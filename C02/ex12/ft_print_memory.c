#include <unistd.h>

const char	g_charset[16] = "0123456789abcdef";

void	print_address(void *p0)
{
	unsigned long int	p;
	long				i;

	p = (unsigned long int)p0;
	i = (sizeof(p) << 3) - 4;
	while (i >= 0)
	{
		write(1, g_charset + (((p >> i) & 0xf) & 15), 1);
		i -= 4;
	}
	write(1, ":", 1);
}

void	print_padding(unsigned int i)
{
	while (i < 16)
	{
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
		write(1, "  ", 2);
		i++;
	}
}

void	print_as_hex(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && i < 16)
	{
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
		write(1, g_charset + (str[i] >> 4), 1);
		write(1, g_charset + (str[i] & 15), 1);
		i++;
	}
	if (i < 16)
	{
		print_padding(i);
	}
	write(1, " ", 1);
}

void	print_as_escaped_text(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && i < 16)
	{
		if ((str[i] <= 0x1F || str[i] == 0x7F))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, str + i, 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	loop_count;
	char			*working_address;

	i = 0;
	if (size <= 0)
	{
		return (addr);
	}
	loop_count = 1 + ((size) / 16);
	while (i < loop_count)
	{
		working_address = addr + (i * 16);
		print_address(working_address);
		print_as_hex(working_address, size);
		print_as_escaped_text(working_address, size);
		size -= 16;
		i++;
		if (i < loop_count)
		{
			write(1, "\n", 1);
		}
	}
	return (addr);
}
