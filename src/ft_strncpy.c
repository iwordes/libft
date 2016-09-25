char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	int		i;

	i = 0;
	while (i < n && dest[i])
	{
		if (src[i] == 0)
			while (dest[i])
				dest[i++] = 0;
		else
			dest[i] = src[i++];
	}
	return (dest);
}
