# Nom des fichiers de test
FILES = test_ft_isalpha \
		test_ft_isdigit \
		test_ft_isalnum \
		test_ft_isprint \
		test_ft_isascii \
		test_ft_strlen \
		test_ft_memset \
		test_ft_bzero \
		test_ft_memcpy \
		test_ft_memmove \
		test_ft_strlcpy \
		test_ft_strlcat \
		test_ft_toupper \
		test_ft_tolower \
		test_ft_strchr \
		test_ft_strrchr \
		test_ft_strncmp \
		test_ft_memchr \
		test_ft_memcmp \
		test_ft_strnstr \
		test_ft_atoi \
		test_ft_calloc \
		test_ft_strdup

# Répertoire de sortie
OUTPUT_DIR = ../output

# Drapeaux de compilation
CFLAGS = -Werror -Wextra -Wall -I ../libft

# Règle par défaut
all: $(OUTPUT_DIR) $(FILES)

# Créer le répertoire de sortie si nécessaire
$(OUTPUT_DIR):
		mkdir -p $(OUTPUT_DIR)

# Règle de compilation des fichiers de test
$(FILES): %: %.c ../libft.a
		gcc $(CFLAGS) $< ../libft.a -o $(OUTPUT_DIR)/$@

# Règle de nettoyage
clean:
		rm -f $(addprefix $(OUTPUT_DIR)/, $(FILES))

.PHONY: all clean