NAME    := libft
VERSION := 1.3.0
AUTHOR  := iwordes

INCDIR  := ./include
OBJDIR  := ./build
OUTDIR  := ./lib
SRCDIR  := ./src

CC      := gcc
CF      := -Wall -Wextra -Werror -I $(INCDIR)

include functions.mk

IN      := $(addprefix io/,$(FN_IO))
IN      += $(addprefix io/ft_printf/,$(FN_PRINTF))
IN      += $(addprefix io/ft_asprintf/,$(FN_ASPRINTF))
IN      += $(addprefix list/,$(FN_LIST))
IN      += $(addprefix memory/,$(FN_MEMORY))
IN      += $(addprefix number/,$(FN_NUMBER))
IN      += $(addprefix string/,$(FN_STRING))
IN      += $(addprefix tree/,$(FN_TREE))
IN      += $(addprefix utf/,$(FN_UTF))
IN      := $(IN)

OBJ     := $(addsuffix .o,$(addprefix $(OBJDIR)/,$(IN)))

OUT     := $(OUTDIR)/$(NAME).a


.PHONY: all
all: $(OUT)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(OUT)

.PHONY: re
re: fclean all


$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CF) -c -o $@ $<

$(OUTDIR)/$(NAME).a: $(OBJ)
	@mkdir -p $(@D)
	libtool -static -o $@ $(OBJ)
