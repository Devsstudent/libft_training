/// Create my own header ///

#include <stlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = (void *)malloc(sizeof(*memory) * size);
	if (!memory)
		return (NULL);
	memory = 0;
	return (memory);
}
