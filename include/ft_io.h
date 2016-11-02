#ifndef FT_IO_H
# define FT_IO_H

# include "ft_string.h"

/*
** Header for I/O functions, such as printing to the screen, getting input, or
** reading from/writing to a file.
*/

typedef struct	s_file
{
	size_t		size;
	char		*content;
	int			desc;
}				t_file;

typedef struct	s_dir
{
	int			desc;
	char		*types;
	void		*contents;
}				t_dir;

/*
** Input
*/
char	ft_getchar(char *prompt);
char	*ft_getdline(char *prompt, char delimiter);
char	*ft_getline(char *prompt);
void	ft_getline_ltd(char *prompt, char *buffer, size_t limit);

char	*ft_readline(int filedes);

/*
** Output
*/
/*
**void		ft_printf(const char *format, ...);
**void		ft_fprintf(FILE *file, const char *format, ...);
**char		*ft_sprintf(const char *format, ...);
**
**void		ft_asprintf(char **ret, const char *format, ...);
*/

void	ft_putchar(char c);
void	ft_putstr(const char *string);
void	ft_putendl(const char *string);
void	ft_putint(long long integer);
void	ft_putint_base(long long integer, int base);
void	ft_putuint(unsigned long long integer);
void	ft_putuint_base(unsigned long long integer, int base);
/*
**void	ft_putdbl(double number);
*/

void	ft_puterr(const char *error);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *string, int fd);
void	ft_putendl_fd(const char *string, int fd);
void	ft_putint_fd(long long integer, int fd);
void	ft_putint_base_fd(long long integer, int base, int fd);
void	ft_putuint_fd(unsigned long long integer, int fd);
void	ft_putuint_base_fd(unsigned long long integer, int base, int fd);
/*
**void	ft_putdbl_fd(double number, int fd);
*/

/*
** Deprecated
*/
void	ft_putnbr(int integer);
void	ft_putnbr_fd(int integer, int fd);

/*
** Filesystem
*/


#endif
