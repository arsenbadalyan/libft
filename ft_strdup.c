#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr_str;

	i = -1;
	ptr_str = (char *)malloc((sizeof(char) * (ft_strlen(s1) + 1)));
	if (!ptr_str)
		return ((void *)0);
	while (s1[++i])
		ptr_str[i] = s1[i];
	ptr_str[i] = '\0';
	return (ptr_str);
}
