// HEAD HEAd //

#include <stdlib.h>
#include <string.h>

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
	return ;
}
