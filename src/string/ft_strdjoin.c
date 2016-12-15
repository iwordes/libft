#include <libft.h>

/*
** ft_strdjoin(char *left, char *right)
** ===========
** From two input strings, creates a third string and returns it. Additionally,
** it frees both of the inputs.
*/

char	*ft_strdjoin(char *left, char *right)
{
	char	*string;

	string = ft_strjoin(left, right);
	free(left);
	free(right);
	return (string);
}
