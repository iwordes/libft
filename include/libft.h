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
**	enum
**	{
**		ascii;
**	}					encoding;
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
void					ft_putstr(const char *string);
void					ft_putendl(const char *string);
void					ft_putnbr(int integer);
/*
**void					ft_putbits(unsigned char byte);
**int					ft_printf(char *pattern, ...);
*/

void					ft_puterr(char *error);

void					ft_putchar_fd(char character, int file_descriptor);
void					ft_putstr_fd(const char *string, int file_descriptor);
void					ft_putendl_fd(const char *string, int file_descriptor);
void					ft_putnbr_fd(int integer, int file_descriptor);

void					ft_fileappend(const char *string, int file_descriptor);
void					ft_fileinsert(const char *string, size_t after_byte);
void					ft_fileinsertl(const char *string, size_t after_line);
void					ft_fileprepend(const char *string, int file_descriptor);

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
** Strings
*/
char					*ft_strcat(char *restrict destination,
									const char *restrict append);
char					*ft_strchr(const char *string, int character);
int						ft_strcmp(const char *string1, const char *string2);
char					*ft_strcpy(char *destination, const char *source);
char					*ft_strdup(const char *string_to_duplicate);
size_t					ft_strlcat(char *restrict string,
									const char *restrict append,
									size_t total_buffer_size);
/*
**char					*ft_strlcpy(char *destination, const char *source,
**									size_t total_buffer_size);
*/
size_t					ft_strlen(const char *string_to_measure);
int						ft_strncmp(const char *string1, const char *string2,
									size_t bytes_to_compare);
char					*ft_strncpy(char *destination, const char *source,
									size_t bytes_to_copy);
char					*ft_strnstr(const char *haystack, const char *needle,
									size_t bytes_to_search);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strsub(const char *string, unsigned int start,
									size_t length);

void					ft_strclr(char *string_to_clear);
void					ft_strdel(char **string_to_delete);
int						ft_strequ(const char *string1, const char *string2);
char					*ft_strnew(size_t length);

void					ft_strrev(char *string_to_reverse_in_place);
char					*ft_strrevdup(const char *string);
size_t					ft_struntil(const char *string, char next_characte00r);

char					*ft_leftpad(const char *string, char pad,
									size_t target);
char					*ft_rightpad(const char *string, char pad,
									size_t target);

/*
** Numbers
*/
int						ft_greater(int input1, int input2);
int						ft_lesser(int input1, int input2);

/*
** Memory
*/
void					ft_bzero(void *pointer, size_t number_of_bytes_to_zero);
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
void					ft_lstadd(t_list **list, t_list *link);
void					ft_lstdel(t_list **list, void (*del)(void*, size_t));
void					ft_lstdelone(t_list **list, void (*del)(void*, size_t));
t_list					*ft_lstnew(const void *content, size_t content_size);
void					ft_lstiter(t_list *list, void (*f)(t_list*));
t_list					*ft_lstmap(t_list *list, t_list *(*f)(t_list*));

t_list					*ft_lstend(t_list *list);
void					ft_lstinsert(t_list *list, t_list *insert,
									size_t after_index);
size_t					ft_lstlen(const t_list *list);
t_list					*ft_lstn(t_list *list, size_t index);
void					ft_lstndel(t_list **list, void (*del)(void*, size_t),
									size_t index);
void					ft_lstndelone(t_list **list, void (*del)(void*, size_t),
										size_t index);
t_list					*ft_lstpop(t_list *list);
void					ft_lstpush(t_list *list, t_list *link);
t_list					*ft_lstshift(t_list **list);
void					ft_lstunshift(t_list **list, t_list *link);


#endif
