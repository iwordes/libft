/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:46 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/07 16:09:36 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MACROS_H
# define FT_MACROS_H

# define BASE10 "0123456789"
# define BASE16 BASE10 "ABCDEF"
# define BASE36 BASE16 "GHIJKLMNOPQRSTUVWXYZ"
# define BASE62 BASE36 "abcdefghijklmnopqrstuvwxyz"
# define BASE64 BASE62 "+/"

# define BASE16L BASE10 "abcdef"
# define BASE36L BASE16L "ghijklmnopqrstuvwxyz"
# define BASE62L BASE36L "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define BASE64L BASE62L "+/"

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef NULL
#  define NULL (void*)0
# endif

# ifndef MAX_PTR
#  define MAX_PTR (void*)(~0LL)
# endif


# define BREAKIF(COND) if (COND) break
# define FREE_RET(FREE, RET) free(FREE); return (RET)
# define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)
# define PASS (void)0

# ifdef FUN_FRIENDLY_MACROS

/*
** TODO
*/

#  define ABS(N) ft_abs(N)
#  define MAX(X, Y) ft_max(X, Y)
#  define MIN(X, Y) ft_min(X, Y)
#  define SQR(N) ft_square(N)
#  define SQRT(N) ft_sqrt(N)

# else

#  define ABS(N) (((N) < 0) ? -(N): (N))
#  define MAX(X, Y) ft_greater(X, Y)
#  define MIN(X, Y) ft_lesser(X, Y)
#  define SQR(N) ((N) * (N))

# endif

# define FT_VSTRJOIN(ARGS...) ft_vstrjoin(ARGS, NULL)

#endif
