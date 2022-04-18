/// TMTC ///

#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*res;
	int	i;

	i = 0;
	res = (char *)malloc(sizeof(*res) * (size + 1));
	if (!res)
		return (0);
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	res[i] = '\0';
	return (res);
}
