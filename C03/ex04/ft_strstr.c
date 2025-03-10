int	ft_strlen(char *str);
// comparison length will always be based of
// of s1's len, so for the purpose of this exercise
// s1 will always be the needle
int	eql(char *s1, char *s2);

// Implementation based on zig's mem.indexOfPose
char	*ft_strstr(char *str, char *to_find)
{
	int	needle_len;
	int	haystack_len;
	int	i;
	int	end;

	needle_len = ft_strlen(to_find);
	haystack_len = ft_strlen(str);
	if (needle_len > haystack_len)
	{
		return (0);
	}
	i = 0;
	end = haystack_len - needle_len;
	while (i < end)
	{
		if (eql(to_find, str + i))
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

int	eql(char *s1, char *s2)
{
	int	i;

	if (s1 == s2)
	{
		return (1);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
