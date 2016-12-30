#include <ft_printf.h>

ssize_t	ft_asprintf_conv_literal(char **string, va_list arg, t_printer *p)
{
	(void)arg;
	*string = ft_strnew(1);
	if (*string == NULL)
		return (-1);
	**string = p->conv;
	return (1);
}
