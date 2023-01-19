#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t index;
	char *str;

	if(!s)
		return (NULL);
	if(start >= (unsigned int)len)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len - start - 1));
	if(!str)
		return (NULL);
	index = 0;
	while(index < len)
	{
		*(str + index) = *(s + start + index);
		index++;
	}
	str[index] = '\0';
	return (str);
}

// int main()
// {
// 	char *str = "i just want this part #############";
// 	size_t size = 20;
// 	char *ret = ft_substr(str, 5, size);
// 	printf("%s\n", ret);
// 	return (0);
// }