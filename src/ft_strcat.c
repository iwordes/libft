char		*ft_strcat(char *string1, const char *string2)
{
	int		end;
	int		i;
	int		l;

	end = ft_strlen(string1);
	i = 0;
	l = ft_strlen(string2);
	while (i < l)
	{
		string1[end + i] = string2[i];
		i++;
	}
	string1[end + i] = 0;
	return (string1);
}
