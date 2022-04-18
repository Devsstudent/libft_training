/// Header ///
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(*s)
	{
		i++
		s++; 
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	total_size;
	int	size1;
	char	*res;
	int	i;
	int	j;

	size1 = ft_strlen(s1);
	total_size = size1 + ft_strlen(s2);
	res = malloc(sizeof(total_size + 1));
	if (!res)
		return (0);
	i = 0;
	j = -1;
	while(i < total_size)
	{
		if (i < size1)
			res[i] = s1[i];
		else 
			res[i] = s2[++j];
		i++;
	}
	res[i] = '\0';
	return (res);
}
