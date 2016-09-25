size_t		ft_strlen(char *string)
{
	size_t	index;

	index = 0;
	while (string[index] != 0)
		index++;
	return (index);
}
