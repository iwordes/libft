#include "libft.h"
char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	hi;
	size_t	hsi;
	size_t	ni;

	hi = 0;
	ni = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (hi < n)
	{
		hsi = hi;
		while (haystack[hsi] == needle[ni] && hsi < n)
		{
			if (needle[ni + 1] == 0)
				return ((char*)haystack + hsi - ni);
			hsi++;
			ni++;
		}
		ni = 0;
		hi++;
	}
	return ((char*)NULL);
}
