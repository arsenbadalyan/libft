#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memptr;

	memptr = (void *)malloc(count * size);
	if (!memptr)
		return ((void *)0);
	ft_bzero(memptr, count * size);
	return (memptr);
}
