#include "libft.h"

static int	get_num_places(int integer)
{
	int		places;

	places = 1;
	while (integer / 10 != 0)
	{
		integer /= 10;
		places++;
	}
	return (places);
}

char		*ft_itoa(int integer)
{
	int		sign;
	int		place;
	int		places;
	char	*string;

	sign = 1;
	places = get_num_places(integer);
	if (integer < 0)
		places++;
	string = ft_strnew(places);
	if (string != NULL)
	{
		if (integer < 0)
		{
			sign = -1;
			string[0] = '-';
		}
		place = places - 1;
		while (sign * (integer / 10) != 0)
		{
			string[place] = sign * (integer % 10) + '0';
			integer /= 10;
			place--;
		}
	}
	return (string);
}
