#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s)
		i++;
	return (i);
}

size_t	*ft_calc_size(char const *s, int *start_space, int *last_index)
{
	int	i;
	int	final_space;
	int	init_length_s;

	final_space = 0;
	init_length_s = ft_strlen(s);
	i = init_length_s - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
	{
		*final_space++;
		i--;
	}
	*last_index = i;
	i = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
	{
		*start_space++;
		i++;
	}
	return (init_length_s - final_space - start_space);
}


char	*ft_strtrim(char const *s)
{
	char	*res;
	int	start_space;
	int	last_index;
	int	j;
	int	i;

	start_space = 0;
	last_index = 0;
	j = 0;
	if (!s)
		return (0);
	res = malloc((ft_calc_size(s, &start_space, &last_index) + 1) * sizeof(*res));
	if (!res)
		return (0);
	i = start_space;
	while (i <= last_index)
	{
		res[j] = s[i];
		j++;
		i++;
	}
	return (res);
}
