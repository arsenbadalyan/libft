#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(destination + i) = (char)c;
		i++;
	}
	return (destination);
}
