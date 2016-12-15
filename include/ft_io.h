/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:42 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 16:47:03 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include "ft_string.h"

/*
** Header for I/O functions, such as printing to the screen, getting input, or
** reading from/writing to a file.
*/

typedef struct		s_getln
{
	int				fd;
	ssize_t			index;
	ssize_t			limit;
	char			buffer[4096];
	struct s_getln	*next;
}					t_getln;

/*
** Input
*/
ssize_t	ft_getline(const int fd, char **const line);
ssize_t	ft_getdelim(const int fd, char **const line, const char delimiter);

/*
** Output
*/
/*
** void	ft_printf(const char *format, ...);
** void	ft_asprintf(char **ret, const char *format, ...);
** void	ft_fdprintf(int fd, const char *format, ...);
**
** void	ft_vprintf(const char *format, va_list args);
** void	ft_vasprintf(char **ret, const char *format, va_list args);
** void	ft_vfdprintf(int fd, const char *format, va_list args);
*/

void	ft_putaddr(const void *address);
void	ft_putchar(char c);
void	ft_putdbl(double number);
void	ft_putendl(const char *string);
void	ft_putint(long long integer);
void	ft_putint_base(long long integer, int base);
void	ft_putldbl(long double number);
void	ft_putstr(const char *string);
void	ft_putuint(unsigned long long integer);
void	ft_putuint_base(unsigned long long integer, int base);
/*
**void	ft_putdbl(double number);
**void	ft_putldbl(long double number);
*/

void	ft_puterr(const char *error);

void	ft_putaddr_fd(const void *address);
void	ft_putchar_fd(char c, int fd);
void	ft_putdbl_fd(double number, int fd);
void	ft_putendl_fd(const char *string, int fd);
void	ft_putflt_fd(long double number, int fd);
void	ft_putint_fd(long long integer, int fd);
void	ft_putint_base_fd(long long integer, int base, int fd);
void	ft_putldbl_fd(long double number, int fd);
void	ft_putstr_fd(const char *string, int fd);
void	ft_putuint_fd(unsigned long long integer, int fd);
void	ft_putuint_base_fd(unsigned long long integer, int base, int fd);
/*
**void	ft_putdbl_fd(double number, int fd);
**void	ft_putldbl_fd(long double number, int fd);
*/

/*
** Deprecated
*/
void	ft_putnbr(int integer);
void	ft_putnbr_fd(int integer, int fd);

#endif
