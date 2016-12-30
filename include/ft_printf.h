#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <sys/types.h>

# include "ft_printf_internal.h"

int		ft_printf(const char *fmt, ...);
int		ft_dprintf(int fd, const char *fmt, ...);
int		ft_asprintf(char **line, const char *fmt, ...);

int		ft_vprintf(const char *fmt, va_list args);
int		ft_vdprintf(int fd, const char *fmt, va_list args);
int		ft_vasprintf(char **line, const char *fmt, va_list args);

#endif
