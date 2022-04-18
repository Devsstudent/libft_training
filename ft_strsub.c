// Header // 


char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int	i;
	int	j;

	if (!s)
		return 0;
	i = 0;
	j = start;
	res = malloc(sizeof(len + 1));
	if (!res)
		return (0);
	while (j < len)
	{
		res[i] = s[j];
		i++;
		j++;
	}
	return (res);
}
