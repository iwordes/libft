char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	hi;
	size_t	ni;

	hi = 0;
	ni = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (hi < n)
	{
		if (haystack[hi] == needle[ni])
		{
			if (needle[ni + 1] == 0)
				return (haystack + hi - ni);
			ni++;
		}
		else
			ni = 0;
		hi++;
	}
	return (NULL)
}
