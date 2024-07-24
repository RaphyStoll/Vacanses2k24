# Nom de la bibliothèque
NAME = libft.a

# Commandes
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f
MKDIR = mkdir -p

# Répertoire pour les fichiers objets
OBJDIR = objects

# Fichiers sources et objets
FILES = ft_isalpha \
        ft_isdigit \
        ft_isalnum \
        ft_isprint \
        ft_isascii \
        ft_strlen \
        ft_memset \
        ft_bzero \
        ft_memcpy \
        ft_memmove \
        ft_strlcpy \
        ft_strlcat \
        ft_toupper \
        ft_tolower \
        ft_strchr \
        ft_strrchr \
        ft_strncmp \
        ft_memchr \
        ft_memcmp \
        ft_strnstr \
        ft_atoi \
        ft_calloc \
        ft_strdup \
        ft_substr \
        ft_strjoin \
        ft_strtrim \
        ft_split

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(FILES)))

# Compilation des fichiers objets
$(OBJDIR)/%.o: %.c
	$(MKDIR) $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Création de la bibliothèque
$(NAME): $(OBJS)
	$(AR) $@ $^

# Cible par défaut
all: $(NAME)

# Nettoyage des fichiers objets
clean:
	$(RM) $(OBJS)

# Nettoyage complet
fclean: clean
	$(RM) $(NAME)

# Rebuild complet
re: fclean all

.PHONY: all clean fclean re