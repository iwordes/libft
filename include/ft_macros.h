#ifndef FT_MACRO_H
# define FT_MACRO_H

# define BASE10 "0123456789"
# define BASE16 BASE10 "ABCDEF"
# define BASE36 BASE16 "GHIJKLMNOPQRSTUVWXYZ"
# define BASE62 BASE32 "abcdefghijklmnopqrstuvwxyz"
# define BASE64 BASE62 "+/"

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

#endif