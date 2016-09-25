int			ft_atoi(const char *str)
{
	int		sign;
	int		total;
	int		i;

	sign = 1;
	total = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		total = (total * 10) + (str[i] - '0');
	return (total * sign);
}
