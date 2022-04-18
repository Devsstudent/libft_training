//// HEad ///

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

int	ft_is_upper(char c)
{
	if (c < 91 && c > 64)
		return (1);
	return (0);
}

int	ft_is_lower(char c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	size_s1;
	int	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (size_s1 != size_s2)
		return (0);
	i = -1;
	while (++i < size_s1)
	{
		
		if (s1[i] == s2[i])
			continue;
		if (ft_is_upper(s1[i]))
			if (s1[i] != s2[i] + 32)
				break;
		if (ft_is_lower(s1[i]))
			if (s1[i] != s2[i] - 32)
				break;
	}
	if (i == size_s1)
		return (1);
	return (0);
}
