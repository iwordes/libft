int			ft_memcmp(const void *mem1, const void *mem2, int n)
{
	int		i;
	t_byte	*bytearr1;
	t_byte	*bytearr2;

	i = 0;
	bytearr1 = (t_byte*)memory1;
	bytearr2 = (t_byte*)memory2;
	while (i < n)
	{
		if (bytearr1[i] != bytearr2[i])
			return (mem1[i] - mem2[i]);
		i++;
	}
	return (0);
}
