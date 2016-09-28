NAME     := libft
VERSION  := 1.0.0
AUTHOR   := iwordes

INCDIR   := ./include
OBJDIR   := ./build
OUTDIR   := ./lib
SRCDIR   := ./src

COMPILER := gcc
CFLAGS   := -Wall -Wextra -Werror #-I $(INCDIR) #-L $(LIBDIR)

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
SRC      :=\
$(SRCDIR)/ft_atoi.c\
$(SRCDIR)/ft_bzero.c\
$(SRCDIR)/ft_isalnum.c\
$(SRCDIR)/ft_isalpha.c\
$(SRCDIR)/ft_isascii.c\
$(SRCDIR)/ft_isdigit.c\
$(SRCDIR)/ft_islower.c\
$(SRCDIR)/ft_isprint.c\
$(SRCDIR)/ft_isupper.c\
$(SRCDIR)/ft_memccpy.c\
$(SRCDIR)/ft_memchr.c\
$(SRCDIR)/ft_memcmp.c\
$(SRCDIR)/ft_memcpy.c\
$(SRCDIR)/ft_memmove.c\
$(SRCDIR)/ft_memset.c\
$(SRCDIR)/ft_strcat.c\
$(SRCDIR)/ft_strchr.c\
$(SRCDIR)/ft_strcmp.c\
$(SRCDIR)/ft_strcpy.c\
$(SRCDIR)/ft_strdup.c\
$(SRCDIR)/ft_strlcat.c\
$(SRCDIR)/ft_strlen.c\
$(SRCDIR)/ft_strncmp.c\
$(SRCDIR)/ft_strncpy.c\
$(SRCDIR)/ft_strnstr.c\
$(SRCDIR)/ft_strstr.c\
$(SRCDIR)/ft_strsub.c\
\
$(SRCDIR)/ft_itoa.c\
$(SRCDIR)/ft_memalloc.c\
$(SRCDIR)/ft_memdel.c\
$(SRCDIR)/ft_putchar_fd.c\
$(SRCDIR)/ft_putchar.c\
$(SRCDIR)/ft_putendl_fd.c\
$(SRCDIR)/ft_putendl.c\
$(SRCDIR)/ft_putnbr_fd.c\
$(SRCDIR)/ft_putnbr.c\
$(SRCDIR)/ft_putstr_fd.c\
$(SRCDIR)/ft_putstr.c\
$(SRCDIR)/ft_strclr.c\
$(SRCDIR)/ft_strdel.c\
$(SRCDIR)/ft_strequ.c\
$(SRCDIR)/ft_striter.c\
$(SRCDIR)/ft_striteri.c\
$(SRCDIR)/ft_strjoin.c\
$(SRCDIR)/ft_strmap.c\
$(SRCDIR)/ft_strmapi.c\
$(SRCDIR)/ft_strnequ.c\
$(SRCDIR)/ft_strnew.c\
$(SRCDIR)/ft_strsplit.c\
$(SRCDIR)/ft_strtrim.c\
$(SRCDIR)/ft_tolower.c\
$(SRCDIR)/ft_toupper.c\
\
$(SRCDIR)/ft_lstadd.c\
$(SRCDIR)/ft_lstdel.c\
$(SRCDIR)/ft_lstdelone.c\
$(SRCDIR)/ft_lstiter.c\
$(SRCDIR)/ft_lstmap.c\
$(SRCDIR)/ft_lstnew.c\
\
\
$(SRCDIR)/ft_iscntrl.c\
$(SRCDIR)/ft_ispunct.c\
$(SRCDIR)/ft_isspace.c\
\
$(SRCDIR)/ft_greater.c\
$(SRCDIR)/ft_leftpad.c\
$(SRCDIR)/ft_lesser.c\
$(SRCDIR)/ft_puterr.c\
$(SRCDIR)/ft_strctrim.c\
$(SRCDIR)/ft_strrev.c\
$(SRCDIR)/ft_strrevdup.c\
$(SRCDIR)/ft_struntil.c\
\
$(SRCDIR)/ft_lstend.c\
$(SRCDIR)/ft_lstinsert.c\
$(SRCDIR)/ft_lstlen.c\
$(SRCDIR)/ft_lstn.c\
$(SRCDIR)/ft_lstndel.c\
$(SRCDIR)/ft_lstndelone.c\
$(SRCDIR)/ft_lstpop.c\
$(SRCDIR)/ft_lstpush.c\
$(SRCDIR)/ft_lstshift.c\
$(SRCDIR)/ft_lstunshift.c

OBJ      := $(subst $(SRCDIR),$(OBJDIR),$(subst .c,.o,$(SRC)))
BIN      := $(OUTDIR)/$(NAME).a

# Phony targets #

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
	$(GCC) -c $<
	mv $@ $(OBJDIR)/

$(OUTDIR)/$(NAME).a: $(OBJ)
	@mkdir -p $(OUTDIR)
	ar -rc $(OUTDIR)/$(NAME).a $(OBJ)
	ranlib $(OUTDIR)/$(NAME).a
