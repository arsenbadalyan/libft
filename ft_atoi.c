int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	num;
	int				sym_counter;

	i = 0;
	num = 0;
	sym_counter = 1;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v') && str[i])
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i++] == '-')
			sym_counter = -1;
		break ;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
		num = num * 10 + (str[i++] - 48);
	return ((int)(num * sym_counter));
}
