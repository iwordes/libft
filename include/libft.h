#ifndef LIBFT_H
# define LIBFT_H

/*
** Definitions
*/


/*
** Inclusions
*/
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*
** Typedefs
*/
typedef unsigned char	t_byte;

/*
** I/O
*/
void					ft_putchar(char character);
void					ft_putstr(char *string);
void					ft_putendl(char *string);
void					ft_putnbr(int integer);
/*
**void					ft_putbits(unsigned char byte);
*/

void					ft_puterr(char *error);

void					ft_putchar_fd(char character, int file_descriptor);
void					ft_putstr_fd(char *string, int file_descriptor);
void					ft_putendl_fd(char *string, int file_descriptor);
void					ft_putnbr_fd(int integer, int file_descriptor);

void					ft_fileappend(char *string, int file_descriptor);
void					ft_fileinsert(char *string, size_t after_line);
void					ft_fileinsertb(char *string, size_t after_byte);

/*
** Character Checks
*/
int						ft_isupper(int character);
int						ft_islower(int character);
int						ft_isalpha(int character);
int						ft_isdigit(int character);
int						ft_isalnum(int character);
int						ft_issymbol(int character);
int						ft_iswspace(int character);
int						ft_isprint(int character);
int						ft_isascii(int character);

/*
** Character Manipulation
*/
int						ft_tolower(int character);
int						ft_toupper(int character);

/*
** String Manipulation
*/
int						ft_atoi(char *string_to_parse);

/*
** Number Manipulation
*/
char					*ft_itoa(int integer);
/*
**char					*ft_itoa_base(int integer, int base);
*/

/*
** Memory Manipulation
*/
void					*ft_bzero(void *pointer, int number_of_bytes_to_zero);

/*
** List Manipulation
*/
typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list



#endif