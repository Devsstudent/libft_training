// //

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (s[size] != '\0')
		size++;
	res = (char *)malloc(sizeof(*res) * size);
	if (!res)
		return (0);
	while (s[i] != '\0')
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
