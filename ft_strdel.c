///TMTC///

#include <stdlib.h>
#include <string.h>

void	ft_strdel(char **as)
{
	if (!(*as))
		return ;
	free(*as);
	*as = NULL;
	return ;
}
