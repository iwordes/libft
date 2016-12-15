/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:46 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/13 13:35:45 by iwordes          ###   ########.fr       */
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

# define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)

# define ABS(NUM) ((NUM < 0) ? -NUM : NUM)
# define MAX(LHS, RHS) ft_greater(LHS, RHS)
# define MIN(LHS, RHS) ft_lesser(LHS, RHS)

#endif
