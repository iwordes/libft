/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:44:21 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:44:22 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** LIBFT
** VERSION 1.0.0
*/

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*
** NULL_GUARD - return NULL if a value is NULL
** Only good when multiple instances of malloc are not being called.
*/
# define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)

/*
** CHRMAP - character map for numerical base functions
*/
# define CHRMAP "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

/*
** Structures
*/
struct					s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
};

struct					s_tree
{
	void				*content;
	size_t				content_size;
	void				*left;
	void				*right;
};

/*
** Typedefs
*/
typedef unsigned char	t_byte;
typedef struct s_list	t_list;
typedef struct s_tree	t_tree;

/*
** Functions
*/

/*
** I/O
*/
/*
** int					ft_printf(char *pattern, ...);
*/

void					ft_putchar(char character);
void					ft_putstr(const char *string);
void					ft_putendl(const char *string);
void					ft_putint(int integer);
void					ft_putint_base(int integer, int base);
/*
** void					ft_putdbl(double number);
*/

void					ft_puterr(char *error);

void					ft_putchar_fd(char character, int file_descriptor);
void					ft_putstr_fd(const char *string, int file_descriptor);
void					ft_putendl_fd(const char *string, int file_descriptor);
void					ft_putint_fd(int integer, int file_descriptor);
void					ft_putint_base_fd(int integer, int base, int file_des);
/*
** void					ft_putdbl_fd(double number, int file_descriptor);
*/

/*
**void					ft_fileappend(const char *string, int file_descriptor);
**void					ft_fileinsert(const char *string, size_t after_byte);
**void					ft_fileinsertl(const char *string, size_t after_line);
**void					ft_fileprepend(const char *string, int file_descriptor);
*/

/*
** These are not used in favor of ft_putint. However, they both work the same.
*/
void					ft_putnbr(int integer);
void					ft_putnbr_fd(int integer, int file_descriptor);

/*
** Character Checks
*/
int						ft_isupper(int character);
int						ft_islower(int character);
int						ft_isalpha(int character);
int						ft_isdigit(int character);
int						ft_isalnum(int character);
int						ft_ispunct(int character);
int						ft_isstdspace(int character);
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
char					*ft_itoa(int integer);
char					*ft_itoa_base(int integer, int base);

/*
** Strings
*/
char					*ft_strcat(char *string, const char *suffix);
char					*ft_strchr(const char *string, int character);
int						ft_strcmp(const char *string1, const char *string2);
char					*ft_strcpy(char *destination, const char *source);
char					*ft_strdup(const char *string);
size_t					ft_strlcat(char *string, const char *suffix,
									size_t total_buffer_size);
size_t					ft_strlen(const char *string);
int						ft_strncmp(const char *string1, const char *string2,
									size_t bytes_to_compare);
char					*ft_strncpy(char *destination, const char *source,
									size_t bytes_to_copy);
char					*ft_strnstr(const char *haystack, const char *needle,
									size_t bytes_to_search);
char					*ft_strrchr(const char *string, char find);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strsub(const char *string, unsigned int start,
									size_t length);

void					ft_strclr(char *string);
void					ft_strdel(char **string);
int						ft_strequ(const char *string1, const char *string2);
void					ft_striter(char *string, void (*func)(char*));
void					ft_striteri(char *string, void (*f)(unsigned, char*));
char					*ft_strjoin(const char *prefix, const char *suffix);
char					*ft_strmap(const char *string, char (*func)(char));
char					*ft_strmapi(const char *string,
									char (*func)(unsigned, char));
int						ft_strnequ(const char *string1, const char *string2,
									size_t n);
char					*ft_strnew(size_t length);
char					**ft_strsplit(const char *string, char delimiter);
char					*ft_strtrim(const char *string);

char					*ft_strncat(char *string, const char *suffix, size_t n);

/*
** Strings - Custom
*/
size_t					ft_charcnt(const char *string, char to_count);
size_t					ft_struntil(const char *string, char next_character);

void					ft_strrev(char *string);
char					*ft_strrevdup(const char *string);

char					*ft_leftpad(const char *string, char pad, size_t size);
char					*ft_rightpad(const char *string, char pad, size_t size);

/*
** Numbers
*/
int						ft_absolute(int integer);
int						ft_greater(int input1, int input2);
int						ft_intlen(int integer);
int						ft_intlen_base(int integer, int base);
int						ft_lesser(int input1, int input2);

/*
** Memory
*/
void					ft_bzero(void *pointer, size_t number_of_bytes_to_zero);
void					*ft_memccpy(void *destination, const void *source,
									int character, size_t bytecount);
void					*ft_memchr(const void *memory, int character,
									size_t bytes_to_copy);
int						ft_memcmp(const void *memory1, const void *memory2,
									size_t bytes_to_compare);
void					*ft_memcpy(void *destination, const void *source,
									size_t bytes_to_copy);
void					*ft_memmove(void *destination, const void *source,
									size_t bytes_to_copy);
void					*ft_memset(void *memory, int value,
									size_t bytes_to_write);

void					*ft_memalloc(size_t bytes_to_allocate_and_zero);
void					ft_memdel(void **memory);

/*
** Lists
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
