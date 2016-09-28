int			ft_issymbol(int c)
{
	if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@'))
		return (1);
	else if ((c >= '[' && c <= '`') || (c >= '{' && c <= '~'))
		return (1);
	else
		return (0);
}
