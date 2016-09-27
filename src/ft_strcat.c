char		*ft_strcat(char *string, const char *suffix)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);
	while (suffix[i])
		string[end + i] = suffix[i++];
	string[end + i] = 0;
	return (string);
}
