/// HEADD /// 

#include <stdlib.h>

 char	*ft_strmap(char const *s, char (*f)(char))
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
		res[i] = (*f)(s[i]);
		i++;
	}
	return (res);
}
