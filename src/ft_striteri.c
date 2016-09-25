void		ft_striter(char *string, void (*func)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (string[i])
	{
		func(i, string + i);
		i++;
	}
}
