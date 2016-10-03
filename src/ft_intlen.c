int			ft_intlen(int integer)
{
	int		length;

	length = 1;
	while ((integer /= 10) != 0)
		length++;
	return (length);
}
