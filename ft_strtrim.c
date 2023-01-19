#include "libft.h"

int	search_set(const char *s1, const char *set, int search_pos)
{
	int	check_index;

	check_index = 0;
	while (s1[search_pos + check_index]
		&& s1[search_pos + check_index] == set[check_index])
		check_index++;
	if (set[check_index] == '\0')
		return (check_index);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		i;
	int		s1_len;
	char	*str;

	i = 0;
	s1_len = ft_strlen(s1);
	start = search_set(s1, set, 0);
	end = s1_len - search_set(s1, set, (s1_len - ft_strlen(set)));
	str = malloc(sizeof(char) * (end - start) + sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i++] = '\0';
	return (str);
}

// int main()
// {
// 	char *s1 = "Hello \t  Please\n Trim me !";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1, " \n\t");
// 	printf("|%s|\n", ret);
// 	return (0);
// }