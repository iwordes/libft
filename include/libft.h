#ifndef LIBFT_H
# define LIBFT_H

/*
** Definitions
*/
# define GREATER(X, Y) ((X) > (Y) ? (X) : (Y))
# define LESSER(X, Y) ((X) < (Y) ? (X) : (Y))

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
void					ft_fileinsert(char *string, size_t after_byte);
void					ft_fileinsertl(char *string, size_t after_line);
void					ft_fileprepend(char *string, int file_descriptor);

/*
** Character Checks
*/
int						ft_isupper(int character);
int						ft_islower(int character);
int						ft_isalpha(int character);
int						ft_isdigit(int character);
int						ft_isalnum(int character);
int						ft_ispunct(int character);
int						ft_isspace(int character);
int						ft_isprint(int character);
int						ft_isascii(int character);

/*
** Character Manipulation
*/
int						ft_tolower(int character);
int						ft_toupper(int character);

/*
** Conversion
*/
int						ft_atoi(const char *string_to_parse);
char					*ft_itoa(int integer_to_stringify);
/*
**char					*ft_itoa_base(int integer, int base);
*/


/*
** String Manipulation
*/
void					ft_strclr(char *string_to_clear);
char					*ft_strcpy(char *destination, const char *source);
void					ft_strdel(char **string_to_delete);
void					ft_strrev(char *string_to_reverse);
char					*ft_strrevdup(char *string_to_duplicate_and_reverse);

/*
** Number Manipulation
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
