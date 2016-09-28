NAME     := libft
VERSION  := 1.0.0
AUTHOR   := iwordes

INCDIR   := ./include
OBJDIR   := ./build
OUTDIR   := ./lib
SRCDIR   := ./src

COMPILER := gcc
CFLAGS   := -Wall -Wextra -Werror -I $(INCDIR) #-L $(LIBDIR)

CMP      := $(COMPILER) $(CFLAGS)

# Organized in two main sections:
# Specified
#     libc recreations
#     libft specific
#     libft bonus (list functions)
# Custom
#     libc recreations
#     libft custom
#     list functions
#
# It makes more sense when you actually look at the spec PDF.
INPUTS   :=\
ft_atoi\
ft_bzero\
ft_isalnum\
ft_isalpha\
ft_isascii\
ft_isdigit\
ft_islower\
ft_isprint\
ft_isupper\
ft_memccpy\
ft_memchr\
ft_memcmp\
ft_memcpy\
ft_memmove\
ft_memset\
ft_strcat\
ft_strchr\
ft_strcmp\
ft_strcpy\
ft_strdup\
ft_strlcat\
ft_strlen\
ft_strncmp\
ft_strncpy\
ft_strnstr\
ft_strstr\
ft_strsub\
\
ft_itoa\
ft_memalloc\
ft_memdel\
ft_putchar_fd\
ft_putchar\
ft_putendl_fd\
ft_putendl\
ft_putnbr_fd\
ft_putnbr\
ft_putstr_fd\
ft_putstr\
ft_strclr\
ft_strdel\
ft_strequ\
ft_striter\
ft_striteri\
ft_strjoin\
ft_strmap\
ft_strmapi\
ft_strnequ\
ft_strnew\
ft_strsplit\
ft_strtrim\
ft_tolower\
ft_toupper\
\
ft_lstadd\
ft_lstdel\
ft_lstdelone\
ft_lstiter\
ft_lstmap\
ft_lstnew\
\
\
ft_iscntrl\
ft_ispunct\
ft_isspace\
\
ft_greater\
ft_leftpad\
ft_lesser\
ft_puterr\
ft_strctrim\
ft_strrev\
ft_strrevdup\
ft_struntil\
\
ft_lstend\
ft_lstinsert\
ft_lstlen\
ft_lstn\
ft_lstndel\
ft_lstndelone\
ft_lstpop\
ft_lstpush\
ft_lstshift\
ft_lstunshift

SRC      := $(addsuffix .c,$(addprefix $(SRCDIR)/,$(INPUTS)))
OBJ      := $(addsuffix .o,$(addprefix $(OBJDIR)/,$(INPUTS)))
BIN      := $(OUTDIR)/$(NAME).a

# Phonies #

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(BIN)

.PHONY: re
re: fclean all

.PHONY: $(NAME)
$(NAME): $(BIN)

# Real targets #

# When any object file is needed, the equivalent source file will be compiled.
# %: Makefile text command. The one in the recipe name and the one in the
#    prerequisites will match up, so that a file main.o will only match to a
#    file called main.c, and not a called file program.c or asset.png.
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CMP) -c $<
	mv $(notdir $@) $(OBJDIR)/

$(OUTDIR)/$(NAME).a: $(OBJ)
	@mkdir -p $(OUTDIR)
	ar -rc $(OUTDIR)/$(NAME).a $(OBJ)
	ranlib $(OUTDIR)/$(NAME).a
