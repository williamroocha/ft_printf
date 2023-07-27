# Directories
SRCDIR      = src
INCDIR      = includes
OBJDIR      = obj

# Source files
SOURCEFILES = $(addprefix $(SRCDIR)/, \
    ft_printf.c \
    ft_putadd.c \
    ft_putchar.c \
    ft_puthexa.c \
    ft_putnbr.c \
    ft_putstr.c \
    ft_unsgint.c\
)

# Add here the object files
OBJECTS     = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCEFILES))

# Output library
NAME        = libftprintf.a

# Compiler and flags
COMPILER    = cc
FLAGS       = -Wall -Wextra -Werror

# Remove command
RM          = rm -f

# Phony targets
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Target to build library
$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)
	@echo "ft_printf compiled"

# Pattern rule for object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@$(COMPILER) $(FLAGS) -c $< -o $@

# Clean object files
clean:
	@$(RM) -r $(OBJDIR)
	@echo "Objects removed"

# Clean object files and library
fclean: clean
	@$(RM) $(NAME)
	@echo "ft_printf removed"

# Rebuild everything
re: fclean all
