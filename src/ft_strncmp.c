int			ft_strncmp(const char *str1, const char *str2, int n)
{
	while (i < n && (*str1 != 0 || *str2 != 0))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
