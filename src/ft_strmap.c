char		*ft_strmap(const char *string, char (*func)(char))
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = ft_strnew(ft_strlen(string));
	if (new_string != NULL)
		while (string[i] != 0)
		{
			new_string[i] = func(string[i]);
			i++;
		}
	return (new_string);
}
