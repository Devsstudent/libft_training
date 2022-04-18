/// tmtc ///

#include <stdlib.h>
#include <string.h>

void	ft_memdel(void **ap)
{
	if (!(*ap))
		return ;
	free(*ap);
	*ap = NULL;
	return ;	
}
