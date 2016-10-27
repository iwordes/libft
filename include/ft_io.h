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

typedef struct	s_folder
{
	int			desc;
	char		*types;
	void		*contents;
}				t_folder;

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
void	ft_putstr(char *string);
void	ft_putendl(char *string);
void	ft_putint(int integer);
void	ft_putint_base(int integer, int base);
/*
**void	ft_putdbl(double number);
*/

void	ft_puterr(char *error);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *string, int fd);
void	ft_putendl_fd(char *string, int fd);
void	ft_putint_fd(int integer, int fd);
void	ft_putint_base_fd(int integer, int base, int fd);
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

/*
**t_file		ft_fileopen();
*/

/*
**int			ft_mkfile(char *path);
**int			ft_mkdir(char *path);
**int			ft_fscopy(char *source_path, char *destination_path);
**int			ft_fsmove(char *source_path, char *destination_path);
*/
/*
**void					ft_fileappend(const char *string, int file_descriptor);
**void					ft_fileinsert(const char *string, size_t after_byte);
**void					ft_fileinsertl(const char *string, size_t after_line);
**void					ft_fileprepend(const char *string, int file_descriptor);
**
**char					*ft_fileread(const char *name);
**char					*ft_fileread_fd(int fd);
**int					ft_filewrite(const char *name, const char *content);
**
**int					ft_filefind(int filedes, const char *string);
**int					ft_filecpy(int fd_dest, int fd_src);
**int					ft_filemov()
**
**size_t				ft_filesize(int fd);
*/

#endif
