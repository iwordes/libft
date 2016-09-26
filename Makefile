NAME    := libft
AUTHOR  := iwordes
VERSION := 0.1.0

SOURCES :=
OBJECTS := $(subst src,build,$(subst .c,.o,$(SOURCES)))

GCC := gcc -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf lib

.PHONY: re
re: fclean all

.PHONY: $(NAME)
$(NAME): lib/$(NAME).a

build/%.o: src/%.c
	@mkdir -p build
	$(GCC) -c src/.c
	mv .o build/.o

lib/$(NAME).a: $(OBJECTS)
	@mkdir -p lib
	ar -rc lib/$(NAME).a build/.o
	ranlib lib/$(NAME).a
