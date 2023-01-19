char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
			return ((char *)(str + i));
		i++;
	}
	if(str[i] == ch)
		return ((char *)(str + i));
	return (0);
}
