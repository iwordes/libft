#include "libft.h"

/*
** Returns the number of places in a given number when converted to X base.
*/
int			ft_intlen_base(int integer, unsigned int base)
{
	int		length;

	length = 1;
	if (base == 1)
		return (integer);
	else if (base > 1)
		while ((integer /= base) != 0)
			length++;
	return (length);
}
