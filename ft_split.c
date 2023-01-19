#include "libft.h"

int	get_other_split(char const *s, char c, int current_pos)
{
	while (s[current_pos] && s[current_pos] != c)
		current_pos++;
	return (current_pos - 1);
}

int	check_free_allocated_memory(char **str, char *alloc, int current_index)
{
	if (!alloc)
	{
		while (current_index >= 0)
		{
			free(str[current_index--]);
		}
		free(str);
		return (0);
	}
	return (1);
}

char	**count_allocated_memory(char const *s, char c)
{
	int		i;
	int		size;
	char	**str;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			i = get_other_split(s, c, i);
			size++;
		}
		i++;
	}
	str = (char **)malloc((sizeof(char *) * (size + 1)));
	return (str);
}

int	split_me(char const *s, char c, char **str, int indexes[])
{
	int		last_pos;
	int		z;

	z = -1;
	last_pos = get_other_split(s, c, indexes[0]);
	*(str + indexes[1]) = (char *)malloc(sizeof(char) * last_pos - indexes[0]
			+ sizeof(char) * 2);
	if (!(check_free_allocated_memory(str, *(str + indexes[1]), indexes[1])))
	{
		return (-1);
	}
	while (indexes[0] <= last_pos)
		str[indexes[1]][++z] = *(s + indexes[0]++);
	str[indexes[1]][++z] = '\0';
	return (indexes[0]);
}

char	**ft_split(char const *s, char c)
{
	int		indexes[2];
	char	**str;

	indexes[0] = 0;
	indexes[1] = 0;
	if(!s || !c || s[0] == '\0')
		return (NULL);
	str = count_allocated_memory (s, c);
	if (!str)
		return (NULL);
	while (s[indexes[0]])
	{
		if (s[indexes[0]] != c)
		{
			indexes[0] = split_me (s, c, str, indexes);
			if (indexes[0] >= 0)
				indexes[1]++;
			else
				return (NULL);
		}
		indexes[0]++;
	}
	str[++indexes[1]] = (char *)malloc(sizeof(char));
	str[indexes[1]][0] = '\0';
	return (str);
}

// int main()
// {
// 	char *string = "                  olol";
// 	// ft_split(string, ' ')[0];
// 	printf("|%s|\n", ft_split(string, ' ')[0]);
// 	return (0);
// }