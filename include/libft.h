#ifndef LIBFT_H
# define LIBFT_H

/*
** LIBFT
** VERSION 0.1.0
**
**
*/


# include <stdlib.h>
# include <string.h>
# include <unistd.h>


/*
** Enumerators
*/
typedef enum			e_bool
{
	false,
	true
}						t_bool;


/*
** Structures
*/
/*
**typedef struct			s_array
**{
**	void				*pointer;
**	size_t				content_size;
**	size_t				size;
**}						t_array;
*/

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

/*
**typedef struct			s_string
**{
**	char				*ptr;
**	size_t				length;
**}						t_string;
*/

/*
**typedef struct			s_tree
**{
**	void				*content;
**	size_t				content_size;
**	void				*left;
**	void				*right;
**}						t_tree;
*/


/*
** Typedefs (Generic)
*/
typedef unsigned char	t_byte;


/*
** Functions
*/

/*
** I/O
*/
void					ft_putchar(char character);
void					ft_putstr(char *string);
void					ft_putendl(char *string);
void					ft_putnbr(int integer);
/*
**void					ft_putbits(unsigned char byte);
**int					ft_printf(char *pattern, ...);
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
/*
**long long				ft_atoll(const char *string_to_parse);
*/
char					*ft_itoa(int integer_to_stringify);
/*
**char					*ft_itoa_base(int integer, int base);
*/


/*
** String Manipulation
*/
char					*ft_strcat(char *destination, const char *append);
char					*ft_strchr(char *string, int character);
int						ft_strcmp(char *string1, char *string2);
char					*ft_strcpy(char *destination, const char *source);
char					*ft_strdup(char *string_to_duplicate);
char					*ft_strlcat(char *string, const char *append,
									size_t total_buffer_size);
/*
**char					*ft_strlcpy(char *destination, const char *source,
**									size_t total_buffer_size);
*/
size_t					ft_strlen(char *string_to_measure);
int						ft_strncmp(const char *string1, const char *string2,
									size_t bytes_to_compare);
char					*ft_strncpy(char *destination, const char *source,
									size_t bytes_to_copy);
char					*ft_strnstr(const char *haystack, const char *needle,
									size_t bytes_to_search);
char					*ft_strstr(const char *haystack, const char *needle);

void					ft_strclr(char *string_to_clear);
void					ft_strdel(char **string_to_delete);
int						ft_strequ(const char *string1, const char *string2);

void					ft_strrev(char *string_to_reverse);
char					*ft_strrevdup(char *string_to_duplicate_and_reverse);

/*
** Number Manipulation
*/


/*
** Memory Manipulation
*/
void					*ft_bzero(void *pointer, int number_of_bytes_to_zero);
void					*ft_memccpy(void *restrict destination,
									const void *restrict source,
									int character, size_t bytecount);
void					*ft_memchr(const void *memory,
									int character_to_find,
									size_t bytes_to_copy);
int						ft_memcmp(const void *memory1,
									const void *memory2,
									size_t bytes_to_compare);
void					*ft_memcpy(void *restrict destination,
									const void *restrict source,
									size_t bytes_to_copy);
void					*ft_memmove(void *restrict destination,
									const void *restrict source,
									size_t bytes_to_copy);
void					*ft_memset(void *restrict memory,
									int value,
									size_t bytes_to_write);

void					*ft_memalloc(size_t bytes_to_allocate_and_zero);
void					ft_memdel(void **memory_to_free);


/*
** List Manipulation
*/



#endif
