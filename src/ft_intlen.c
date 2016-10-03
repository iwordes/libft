int			ft_intlen(int integer)
{
	int		places;

	places = 1;
	while ((integer /= 10) != 0)
		places++;
	return (places);
}
