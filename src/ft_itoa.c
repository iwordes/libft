#include "libft.h"

static int	get_num_places(int integer)
{
	int		places;

	places = 1;
	while (integer / 10 > 0)
	{
		integer /= 10;
		places++;
	}
	return (places);
}

char		*ft_itoa(int integer)
{
	int		place;
	int		places;
	char	*string;

	places = get_num_places(integer);
	if (integer < 0)
		places++;
	string = ft_strnew(places);
	if (string != NULL)
	{
		if (integer < 0)
		{
			integer *= -1;
			string[0] = '-';
		}
		place = places - 1;
		while (integer / 10 > 0)
		{
			string[place] = integer % 10 + '0';
			integer /= 10;
			place--;
		}
	}
	return (string);
}
