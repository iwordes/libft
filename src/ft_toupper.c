#include "libft.h"

int		ft_toupper(int character)
{
	if (ft_islower(character))
		character -= 32;
	return (character);
}
