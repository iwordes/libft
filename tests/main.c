#include "libft.h"

#include <stdio.h>
#include <strings.h>

void			pass(int test)
{
	printf("test #%d: " GRN "PASS\n" NML);
}

void			fail(int test, char *expected, char *got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected \"%s\", got \"%s\"\n",
			test, expected, got);
}
void			faili(int test, int expected, int got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected \"%d\", got \"%d\"\n",
			test, expected, got);
}

/*
** Tests (Alphabetical)
*/

int		test_atoi(void)
{
	char	*std;
	char	*ft;
	char	*inputs[] =
	{
		"",
		"42",
		"-42",
		"         4    2    ",
		"	 15 7",
		"  			- 3  ",
		"43-1",
		"\0"
	};
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
	while (inputs[i][0] != 0)
	{
		std = atoi(inputs[i]);
		ft = ft_atoi(inputs[i]);
		if (strcmp(std, ft) == 0)
			pass(i);
		else
		{
			fail(i, std, ft);
			outcome = 0;
		}
		free(std);
		free(ft);
		i++;
	}
	return (outcome);
}

int		test_bzero(void)
{
	long	std;
	long	ft;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
	while (i <= 4)
	{
		std = 0xFFFFFFFF;
		ft = std;
		bzero((void*)&std, i);
		ft_bzero((void*)&ft, i);
		if (std == ft)
			pass(i);
		else
		{
			faili(i, (int)std, (int)ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

// int		test_dtoa(void)
// {
//
// }

int		test_itoa(void)
{
	int		inputs[] =
	{
		0,
		42,
		-42,
		255
	};
	char	*outputs[] =
	{
		"0",
		"42",
		"-42",
		"255",
		"\0"
	};
	char	*string;
	int		outcome;
	int		i;

	outcome = 1;
	i = 0;
	while (outputs[i][0] != 0)
	{
		string = ft_itoa(inputs[i]);
		if (strcmp(string, outputs[i]) == 0)
			pass(i);
		else
		{
			fail(i, outputs[i], string);
			outcome = 0;
		}
		free(string);
		i++;
	}
	return (outcome);
}

int		test_memalloc(void)
{
	return (*((long*)ft_memalloc(4)) == 0);
}

int		test_memccpy(void)
{
	char	*inputs[] =
	{
		"Merry Christmas!", "t",
		"\"Unfathomable,\" he swore,", ",",
		"This is it; there's nothing else here.", "?",
		"", "a",
		"\0"
	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
	while (inputs[i][0] != 0)
	{
		stdr = memccpy((void*)std, (void*)inputs[i], (int)inputs[i + 1][0]));
		ftr = ft_memccpy((void*)ft, (void*)inputs[i], (int)inputs[i + 1][0]);
		if (std == ft && stdr == ftr)
			pass(i / 2);
		else
		{
			if (std != ft)
				fail(i / 2, std, ft);
			else if (stdr != ftr)
				fail(i / 2, (char*)stdr, (char*)ftr);
			outcome = 0;
		}
		free(std);
		free(ft);
		i += 2;
	}
	return (outcome);
}

int		test_memchr(void)
{
	char	*inputs[] =
	{
		"Frozen icicle", "e",
		"mixed bag", "h",
		"", { 1 },
		"An obscenely long block of text that no sane person would generally"
		"try to input to a function, but nonetheless will be put there for no"
		"reason other than to try to mess it up. Generally speaking, the koala"
		"is well known for its jumping capability. Wait, no, I think that was"
		"the other one. Steve, turn off the camera, I'm making me look stupid!",
		";",
		"\0"
	};
	char	*std;
	char	*ft;
	int		i;
	int		outcome;

	i = 0;
	outcome = 0;
	while (inputs[i][0] != 0)
	{
		std = (char*)memchr((void*)inputs[i], (int)inputs[i + 1][0]);
		ft = (char*)ft_memchr((void*)inputs[i], (int)inputs[i + 1][0]);
		if (strcmp(std, ft) == 0)
			pass(i);
		else
		{
			faili(i, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_memcmp(void)
{
	char	*inputs[] =
	{
		"Some real text", "Some fake text",
		"AbbCccDdddEeeee", "Abbcccddddeeeee",
		"what", { -1, 50, 14, 11, 116 },
		"\0"
	};
	char	*std;
	char	*ft;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
	while (inputs[i][0] != 0)
	{
		std = memcmp(inputs[i], inputs[i + 1]);
		ft = ft_memcmp(inputes[i], inputes[i + 1]);
		if (std == ft)
			pass(i / 2);
		else
		{
			fail(i / 2, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_memcpy(void)
{
	char	*inputs[] =
	{
		"Some text, ",
		"A larger block of text.",
		"A particularly large block of text, made to test how ft_memcpy deals"
		"with fairly big inputs.",
		"Some text that doesn't matter",
		"what is this I don't even",
		"\0"
	};
	int		bytecounts[] =
	{
		6,
		15,
		42,
		0,
		-1
	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;

}

int		test_memdel(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_memmove(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_memset(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strcat(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strchr(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strclr(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strcmp(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strcpy(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strctrim(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strdel(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strdup(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strequ(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_striter(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_striteri(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strjoin(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strlcat(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strlen(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strmap(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strmapi(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strncmp(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strncpy(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strnequ(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strnew(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strnstr(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strsplit(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strstr(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strsub(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_strtrim(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_struntil(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_tolower(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}

int		test_toupper(void)
{
	char	*inputs[] =
	{

	};
	char	*std;
	char	*ft;
	void	*stdr;
	void	*ftr;
	int		i;
	int		outcome;

	i = 0;
	outcome = 1;
}


/*
** Tests for core (mandatory) functions only.
*/
struct
{
	char		*name[] =
	{
		"ft_atoi",
		"ft_itoa",
		"ft_memalloc",
		"ft_memccpy",
		"ft_memchr",
		"ft_memcmp",
		"ft_memcpy",
		"ft_memdel",
		"ft_memmove",
		"ft_memset",
		"ft_strcat",
		"ft_strchr",
		"ft_strclr",
		"ft_strcmp",
		"ft_strcpy",
		"ft_strdel",
		"ft_strdup",
		"ft_strequ",
		"ft_striter",
		"ft_striteri",
		"ft_strjoin",
		"ft_strlcat",
		"ft_strlen",
		"ft_strmap",
		"ft_strmapi",
		"ft_strncmp",
		"ft_strncpy",
		"ft_strnequ",
		"ft_strnew",
		"ft_strnstr",
		"ft_strsplit",
		"ft_strstr",
		"ft_strsub",
		"ft_strtrim",
		"ft_tolower",
		"ft_toupper"
	};
	int			(*func)(void)[] =
	{
		test_atoi,
		test_bzero,
		test_itoa,
		test_memalloc,
		test_memccpy,
		test_memchr,
		test_memcmp,
		test_memcpy,
		test_memdel,
		test_memmove,
		test_memset,
		test_strcat,
		test_strchr,
		test_strclr,
		test_strcmp,
		test_strcpy,
		test_strdel,
		test_strdup,
		test_strequ,
		test_striter,
		test_striteri,
		test_strjoin,
		test_strlcat,
		test_strlen,
		test_strmap,
		test_strmapi,
		test_strncmp,
		test_strncpy,
		test_strnequ,
		test_strnew,
		test_strnstr,
		test_strsplit,
		test_strstr,
		test_strsub,
		test_strtrim,
		test_tolower,
		test_toupper
	};
}				core;

/*
** Tests for bonus functions.
*/
struct
{
	char		*name[] =
	{
		"ft_lstadd",
		"ft_lstdel",
		"ft_lstdelone",
		"ft_lstiter",
		"ft_lstmap",
		"ft_lstnew"
	};
	int			(*func)(void)[] =
	{
		test_lstadd,
		test_lstdel,
		test_lstdelone,
		test_lstiter,
		test_lstmap,
		test_lstnew
	};
}				bonus;

/*
** Tests for custom functions.
*/
struct
{
	char		*name[] =
	{
		//"ft_arrpop",
		//"ft_arrpush",
		//"ft_arrshift",
		//"ft_arrunshift",
		//"ft_fileappend",
		//"ft_fileinsert",
		//"ft_fileinsertl",
		//"ft_fileprepend",
		//"ft_itoa_base",
		"ft_strctrim",
		"ft_struntil"
	};
	int			(*func)(void)[] =
	{
		test_struntil,
	};
}				custom;

int				*test_core(void)
{
	size_t		i;
	int			passes;
	int			fails;

	i = 0;
	passes = 0;
	fails = 0;
	printf("*** CORE FUNCTIONS ***");
	while (map.name[i][0] != 0)
	{
		printf("[%s]\n", map.name[i]);
		if (map.func[i]())
			passes++;
		else
			fails++;
		printf("\n\n");
		i++;
	}
	printf("Total passes: ");
	if ()
	printf("Total fails: ");
	if (fails == 0)
		printf("\n*** " GRN "SUCCESS" NML " ***\n");
	return (0);
}

void			test_bonus(void)
{
	size_t		i;
	int			passes;
	int			fails;

	i = 0;
	passes = 0;
	fails = 0;
	printf("*** BONUS FUNCTIONS ***\n");
	while (map.name[i][0] != 0)
	{
		printf("[%s]\n", map.name[i]);
		if (map.func[i]())
			passes++;
		else
			fails++;
		printf("\n\n");
		i++;
	}
	printf("Total passes: ");
	if ()
	printf("Total fails: ");
	if (fails == 0)
		printf("\n*** " GRN "SUCCESS" NML " ***\n");
	return (0);
}

void			test_custom(void)
{
	size_t		i;
	int			passes;
	int			fails;

	i = 0;
	passes = 0;
	fails = 0;
	printf("*** CUSTOM FUNCTIONS ***\n")
	while (custom.name[i][0] != 0)
	{
		printf("[%s]\n", custom.name[i]);
		if (custom.func[i]())
			passes++;
		else
			fails++;
		printf("\n\n");
		i++;
	}
	printf("Total passes: ");
	if ()
	printf("Total fails: ");
	if (fails == 0)
		printf("\n*** " GRN "SUCCESS" NML " ***\n");
}


void			print_help(const char *argv0)
{
	printf("Usage: %d core | bonus | custom", argv0);
}

/*
** Test functions and then release a final report.
*/
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "core"))
			test_core();
		else if (ft_strcmp(argv[1], "bonus"))
			test_bonus();
		else if (ft_strcmp(argv[1], "custom"))
			test_custom();
		else
			print_help();
	}
	else
		print_help();
	return (0);
}
