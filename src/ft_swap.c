/*
** Switches the value of two integers.
*/
void		ft_swap(int *a, int *b)
{
	int		c;

	if (a != NULL && b != NULL)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}
