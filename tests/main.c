#include "libft.h"

#include <stdio.h>
#include <strings.h>
#include <limits.h>

#define RED
#define GRN
#define BLU
#define NML

void			pass(int test)
{
	printf("test #%d: " GRN "PASS\n" NML);
}

void			fail(int test, char *expected, char *got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected %s, got %s.\n",
			test, expected, got);
}
void			faili(int test, int expected, int got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected \"%d\", got \"%d\".\n",
			test, expected, got);
}
void			failp(int test, void *expected, void *got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected %p, got %p.\n",
			test, expected, got);

}
void			fails(int test, char *expected, char *got)
{
	printf("test #%d: " RED "FAIL\n" NML "Expected \"%s\", got \"%s\".\n",
			test, expected, got);
}

/*
** Tests (Standard Remakes)
*/

int		test_atoi(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"42",
		"-42",
		"     4  2",
		"15     7",
		"   -   3",
		"43-1",
		{-1}
	};
	int		std;
	int		ft;

	while (inputs[i][0] != -1)
	{
		std = atoi(inputs[i]);
		ft = ft_atoi(inputs[i]);
		if (std == ft)
			pass(i);
		else
		{
			faili(i, std, ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_bzero(void)
{
	int		i = 0;
	int		outcome = 1;
	long	inputs[] =
	{
		0x00000000,
		0xEF00FF00,
		0x00FF00FF,
		0x0F0F0F0F,
		{-1}
	};
	size_t	bytecounts[] =
	{
		0,
		4,
		2,

	};
	long	std;
	long	ft;

	while (inputs[i] != -1)
	{
		std = inputs[i];
		ft = inputs[i];
		bzero((void*)&std, bytecounts[i]);
		ft_bzero((void*)&ft, bytecounts[i]);
		if (std == ft)
			pass(i);
		else
		{
			faili(i, std, ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_memccpy(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.", " ",
		"A string of characters, missing the proper character.", "?",
		"", "An empty string, of which A is not in.",
		"", "",
		{-1}
	};
	size_t	bytecounts[] =
	{
		strlen(inputs[0]),
		strlen(inputs[1]) + 1,
		1,
		0
	};
	char	*std;
	char	*ft;
	char	*strd;
	char	*ftr;

	while (inputs[i][0] != -1)
	{
		std = (char*)malloc(strlen( inputs[i] ));
		ft = (char*)malloc(strlen( inputs[i] ));

		stdr = (char*)memccpy( (void*)std, (void*)(inputs[i]),
				inputs[i + 1][0], bytecounts[i / 2] );
		ftr = (char*)ft_memccpy( (void*)ft, (void*)(inputs[i]),
				inputs[i + 1][0], bytecounts[i / 2] );

		std[bytecounts[ i / 2 ]] = 0;
		ft[bytecounts[ i / 2 ]] = 0;

		if (stdr - std == ftr - ft && strcmp(std, ft) == 0)
			pass(i / 2);
		else
		{
			fails(i / 2, std, ft);
			outcome = 0;
		}

		free(std);
		free(ft);

		i++;
	}
	return (outcome);
}

int		test_memchr(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"Frozen icicle", "e",
		"mixed bag", "h",
		"", "",
		{ -128, 0 }, { 127 },
		{ 127, 0 }, { -128 },
		{-1}
	};
	size_t	bytecounts[] =
	{
		strlen(inputs[i]),
		4,
		1,
		2,
		0
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = (char*)memchr((void*)(inputs + i), inputs[i + 1][0], bytecounts[i / 2]);
		ft = (char*)ft_memchr((void*)(inputs + i), inputs[i + 1][0], bytecounts[i / 2]);
		if (std == ft)
			pass(i / 2);
		else
		{
			failp(i / 2, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_memcmp(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"Some real text", "Some real text",
		"Some real text", "Some fake text",
		"Some fake text", "Some real text",
		"Some real text", "Some real text, or perhaps fake text?",
		"Some real text, and a real suffix", "Some real text",
		"Some real text, and some stuff that gets ignored.", "Some real text",
		"", "",
		"", " ",
		",", "",
		{-1}
	};
	size_t	bytecounts[] =
	{
		strlen(inputs[0]),
		strlen(inputs[2]),
		strlen(inputs[4]),
		strlen(inputs[7]),
		strlen(inputs[8]),
		strlen(inputs[11]),
		1,
		1,
		0
	};
	int		std;
	int		ft;

	while (inputs[i][0] != -1)
	{
		std = memcmp(inputs[i], inputs[i + 1], bytecounts[i / 2]);
		ft = ft_memcmp(inputs[i], inputs[i + 1], bytecounts[i / 2]);
		if (std == ft)
			pass(i / 2);
		else
		{
			faili(i / 2, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_memcpy(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;
	size_t	length;

	while (inputs[i][0] != -1)
	{
		length = GREATER( strlen(inputs[i]), strlen(inputs[i + 1]) );
		std = malloc(length + 1);
		ft = malloc(length + 1);
		memcpy((void*)std, (void*)inputs[i + 1], bytecounts[i / 2]);
		ft_memcpy((void*)ft, (void*)inputs[i + 1], bytecounts[i / 2]);
		std[length] = 0;
		ft[length] = 0;
		if (strcmp(std, ft) == 0)
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

int		test_memmove(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"Some text / to move.",
		"Some more / text / to move.",
		"What you see is what you get.",
		{-1}
	};
	size_t	doffsets[] =
	{
		0,
		10,
		9
	},
	size_t	soffsets[] =
	{
		10,
		17,
		25
	};
	size_t	bytecounts[] =
	{
		12,
		12,
		3
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = strdup(inputs[i]);
		ft = strdup(inputs[i]);
		memmove(std + doffsets[i], std + soffsets[i], bytecounts[i]);
		ft_memmove(ft + doffsets[i], ft + soffsets[i], bytecounts[i]);
		if (strcmp(std, ft) == 0)
			pass(i);
		else
		{
			fails(i, std, ft);
			outcome = 0;
		}
		free(std);
		free(ft);
		i++;
	}
	return (outcome);
}

int		test_memset(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"This is a string of characters.",
		"Another string of characters.",
		"FFFFFF",
		{-1}
	};
	int		sets[] =
	{
		'*',
		42,
		'0'
	};
	size_t	bytecounts[] =
	{
		19,
		21,
		4
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = strdup(inputs[i]);
		ft = strdup(inputs[i]);
		memset(std, sets[i], bytecounts[i]);
		ft_memset(ft, sets[i], bytecounts[i]);
		if (strcmp(std, ft) == 0)
			pass(i);
		else
		{
			fail(i, std, ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_strcat(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string", " of characters.",
		"Wimbly ", "Wode",
		"I think", " this might be a string?",
		"", "A string.",
		"A string.", "",
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = (char*)malloc( strlen(inputs[i]) + strlen(inputs[i + 1]) + 1 );
		ft = (char*)malloc( strlen(inputs[i]) + strlen(inputs[i + 1]) + 1 );
		strcpy(std, inputs[i]);
		strcpy(ft, inputs[i]);
		strcat(std, inputs[i + 1]);
		ft_strcat(ft, inputs[i + 1]);
		if (strcmp(std, ft) == 0)
			pass(i / 2);
		else
		{
			fails(i / 2, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_strchr(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.",
		"A string of characters, which of course does not have the letter",
		"A string of characters, which ends in a terminator.",
		"",
		"",
		{-1}
	};
	char	characters[] =
	{
		'A',
		'B',
		0,
		42,
		0,
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = strchr(inputs[i], characters[i]);
		ft = ft_strchr(inputs[i], characters[i]);
		if (std == ft)
			pass(i);
		else
		{
			failp(i, (void*)std, (void*)ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_strcmp(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.", "A string of fake characters.",
		"A string of characters.", "A string of characters. And a suffix.",
		"A string of characters.", "",
		"", "A string of characters.",
		"", "",
		{-1}
	};
	int		std;
	int		ft;

	while (inputs[i][0] != -1)
	{
		std = strcmp(inputs[i], inputs[i + 1]);
		ft = ft_strcmp(inputs[i], inputs[i + 1]);
		if (std == ft)
			pass(i / 2);
		else
		{
			faili(i / 2, std, ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

int		test_strcpy(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.", "A string.",
		"A string.", "A string of characters.",
		"A string of characters.", "",
		"", "A string of characters.",
		"", "",
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = strdup(inputs[i]);
		ft = strdup(inputs[i]);
		strcpy(std, inputs[i + 1]);
		ft_strcpy(ft, inputs[i + 1]);
		if (strcmp(std, ft) == 0)
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

int		test_strdup(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.",
		"A string of characters\0, terminated early.",
		"",
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		std = strdup(inputs[i]);
		ft = ft_strdup(inputs[i]);
		if (strcmp(std, ft) == 0)
			pass(i);
		else
		{
			fail(i, std, ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_strlcat(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{

		{-1}
	};
	size_t	buffersizes[] =
	{

	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strlen(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strncmp(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strncpy(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strnstr(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strstr(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_tolower(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_toupper(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

/*
** Tests (libft special)
*/

int		test_itoa(void)
{
	int		i = 0;
	int		outcome = 1;
	int		inputs[] =
	{
		0,
		42,
		-42,
		INT_MIN,
		INT_MAX
	};
	char	*outputs[] =
	{
		"0",
		"42",
		"-42",
		#if INT_MAX == 9223372036854775807
		"-9223372036854775808",
		"9223372036854775807",
		#elif INT_MAX == 2147483647
		"-2147483648",
		"2147483647",
		#elif INT_MAX == 32767
		"-32768",
		"32767",
		#endif
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		output = ft_itoa(inputs[i]);
		if (strcmp(output, outputs[i]) == 0)
			pass(i);
		else
		{
			faili(i, outputs[i], output);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_memalloc(void)
{
	return (*((long*)ft_memalloc(4)) == 0);
}

int		test_memdel(void)
{
	void	*input;

	input = malloc(16);
	ft_memdel((void**)&input);
	if (input == NULL)
	{
		pass(0);
		return (1);
	}
	else
	{
		fail(0, "nullified pointer", "input pointer back");
		return (0);
	}
}

int		test_strclr(void)
{
	int		i = 0;
	int		j = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters",

		"",
		{-1}
	};
	char	*ft;

	while (inputs[i][0] != -1)
	{
		ft = strdup(inputs[i]);
		ft_strclr(ft);
		j = 0;
		while (j <= strlen(inputs[i]))
		{
			if (ft[j] != 0)
			{
				if (j == strlen(inputs[i]))
					fail(i, "ending terminator", "none");
				else
					fail(i, "zeroed string", "non-zeroed string");
				outcome = 0;
			}
			j++;
		}
		free(ft);
		i++;
	}
	return (outcome);
}

int		test_strdel(void)
{
	char	*string = strdup("A string of characters.");

	ft_strdel(&string);
	if (string == NULL)
	{
		pass(0);
		return (1);
	}
	else
	{
		fail(0, "null pointer", "non-null pointer");
		return (0);
	}
}

int		test_strequ(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.", "A string of characters.",
		"A string", "A string of characters.",
		"A string of characters.", "A string",
		"A string of characters.", "No such luck, I'm afraid.",
		"", "",
		{-1}
	};
	int		outputs[] =
	{
		1,
		0,
		0,
		0,
		1
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		ft = ft_strequ(inputs[i], inputs[i + 1]);
		if (ft == outputs[i / 2])
			pass(i / 2);
		else
		{
			faili(i / 2, outputs[i / 2], ft);
			outcome = 0;
		}
		i += 2;
	}
	return (outcome);
}

void	func_striter(char *character)
{
	static unsigned int i = 0;

	if (i % 8 == 0)
		*character += 1;
	i++;
}

void	func_striteri(unsigned int index, char *character)
{
	static unsigned int i = 0;

	if (i % 8 == 0)
		*character += 1;
	i++;
}

int		test_striter(void)
{
	int		i = 0;
	int		j = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.",
		"",
		{-1}
	};
	char	*outputs =
	{
		"B string!of charbcters.",
		""
	};
	char	*ft;

	while (inputs[i][0] != -1)
	{
		ft = strdup(inputs[i]);
		ft_striter(ft, func_striter);
		if (strcmp(outputs[i], ft) == 0)
			pass(i);
		else
		{
			fail(i, outputs[i], ft);
			outcome = 0;
		}
		free(ft);
		i++;
	}
	return (outcome);
}

int		test_striteri(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string of characters.",
		{-1}
	};
	char	*outputs[] =
	{
		"B string!of charbcters."
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{
		ft = strdup(inputs[i]);
		ft_striteri(ft, func_striteri);
		if (strcmp(outputs[i], ft) == 0)
			pass(i);
		else
		{
			fails(i, outputs[i], ft);
			outcome = 0;
		}
		i++;
	}
	return (outcome);
}

int		test_strjoin(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		"A string ", "of characters.",
		"A string of characters.", "",
		"", "A string of characters.",
		"", "",
		{-1}
	};
	char	*outputs[] =
	{
		"A string of characters.",
		"A string of characters.",
		"A string of characters.",
		""
	};
	char	*ft;

	while (inputs[i][0] != -1)
	{
		ft = ft_strjoin(inputs[i], inputs[i + 1]);
		if (strcmp(outputs[i], ft) == 0)
			pass(i / 2);
		else
		{
			fail(i / 2, outputs[i], ft);
			outocme = 0;
		}
		free(ft);
		i += 2;
	}
	return (outcome);
}

int		test_strmap(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strmapi(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strnequ(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strnew(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strsplit(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strsub(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_strtrim(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{
		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
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
** Tests for custom functions
*/
int		test_strctrim(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{

		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

int		test_struntil(void)
{
	int		i = 0;
	int		outcome = 1;
	char	*inputs[] =
	{

		{-1}
	};
	char	*std;
	char	*ft;

	while (inputs[i][0] != -1)
	{

	}
	return (outcome);
}

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
		"ft_strrev",
		"ft_struntil"
	};
	int			(*func)(void)[] =
	{
		test_strctrim,
		test_strrev,
		test_struntil
	};
}				custom;


/*
**
*/
int				*test_core(void)
{
	size_t		i;
	int			passes;
	int			fails;

	i = 0;
	passes = 0;
	fails = 0;
	printf("[ CORE FUNCTIONS ]");
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
	printf("Total: " GRN "%d" NML " passed, " RED "%d" NML " failed of "
			BLU "%d" NML "\n",
			passes, fails, passes + fails);
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
	printf("Total: " GRN "%d" NML " passed, " RED "%d" NML " failed of "
			BLU "%d" NML "\n",
			passes, fails, passes + fails);
}

#ifdef IW_CUSTOM
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
	printf("Total: " GRN "%d" NML " passed, " RED "%d" NML " failed of "
			BLU "%d" NML "\n",
			passes, fails, passes + fails);
}
#endif

void			print_help(const char *argv0)
{
	#ifdef IW_CUSTOM
	printf("Usage: %s core | bonus | custom\n", argv0);
	#else
	printf("Usage: %s core | bonus\n", argv0);
	#endif
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "core"))
			test_core();
		else if (ft_strcmp(argv[1], "bonus"))
			test_bonus();
		#ifdef IW_CUSTOM
		else if (ft_strcmp(argv[1], "custom"))
			test_custom();
		#endif
		else
			print_help();
	}
	else
		print_help();
	return (0);
}
