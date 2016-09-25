void		ft_striter(char *string, void (*func)(char*))
{
	while (*string)
	{
		func(string);
		string++;
	}
}
