// Header //

int	ft_strnequ(char const *s1, char const *s2, int n)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1 && s2 || i < n)
	{
		if (s1 != s2)
			return (0);
		i++;
	}
	return (1);
}
