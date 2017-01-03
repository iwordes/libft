FN_MEMORY := ft_bzero ft_drealloc ft_memalloc ft_memccpy ft_memchr ft_memcmp\
			 ft_memcpy ft_memdel ft_memmove ft_memset ft_memuntil ft_realloc

FN_STRING :=\
ft_atoi\
ft_charcnt\
ft_charrcnt\
ft_itoa\
ft_itoa_base\
\
ft_strcap\
ft_strcat\
ft_strchr\
ft_strclr\
ft_strcmp\
ft_strcpy\
ft_strctrim\
\
ft_isalnum\
ft_isalpha\
ft_isascii\
ft_iscntrl\
ft_isdigit\
ft_islower\
ft_ispunct\
ft_isprint\
ft_isspace\
ft_isstdspace\
ft_isupper\
\
ft_strdup\
ft_strlcat\
ft_strlen\
\
ft_strncmp\
ft_strncpy\
ft_strndup\
ft_strnstr\
\
ft_strrchr\
ft_strstr\
ft_strsub\
\
ft_strdel\
ft_strdjoin\
ft_strequ\
ft_striter\
ft_striteri\
ft_strjoin\
ft_strmap\
ft_strmapi\
ft_strncat\
ft_strnequ\
ft_strnew\
ft_strsplit\
ft_strtrim\
\
ft_strrev\
ft_strrevdup\
ft_strsim\
ft_struntil\
ft_struntils\
ft_strluntil\
ft_leftpad\
ft_rightpad\
\
ft_strlowcase\
ft_strupcase\
ft_strrep\
ft_strssplit\
\
ft_tolower\
ft_toupper\

FN_NUMBER    := ft_absolute ft_greater ft_intlen ft_intlen_base ft_lesser ft_power\
				ft_square ft_swap ft_uintlen ft_uintlen_base

FN_IO        := ft_printf ft_vprintf\
				ft_asprintf ft_vasprintf\
				ft_dprintf ft_vdprintf
FN_IO        += ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_puterr\
				ft_putint ft_putint_fd ft_putint_base ft_putint_base_fd ft_putstr\
				ft_putstr_fd ft_putuint ft_putuint_fd ft_putuint_base\
				ft_putuint_base_fd ft_putnbr ft_putnbr_fd
FN_IO        += ft_getline

FN_PRINTF    := cast_signed cast_unsigned

FN_ASPRINTF  := dispatch\
				format\
				ljust rjust\
				parse parse_flags parse_length parse_wargp\
				segdjoin segjoin\
				text\
				uitoa_base
FN_ASPRINTF  += conv_char conv_char_long\
				conv_dec conv_dec_long\
				conv_hex conv_hex_caps\
				conv_literal\
				conv_octal conv_octal_long\
				conv_ptr\
				conv_str conv_str_long\
				conv_unsigned conv_unsigned_long

FN_LIST      := ft_lstadd ft_lstdel ft_lstdelone ft_lstend ft_lstinsert ft_lstiter\
				ft_lstlen ft_lstmap ft_lstn ft_lstndel ft_lstndelone ft_lstnew\
				ft_lstpop ft_lstpush ft_lstshift ft_lstunshift

FN_TREE      := ft_treebal ft_treeclr ft_treedel ft_treefind ft_treeins ft_treenew
FN_UTF       := ft_utf8_decode ft_utf8_encode ft_utf8_size\
				ft_utf8to16 ft_utf8to16_len\
				ft_utf16_decode ft_utf16_encode\
				ft_utf16to8 ft_utf16to8_len\
				ft_utf32to8 ft_utf32to8_len
