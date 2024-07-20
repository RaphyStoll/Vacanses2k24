# Nom des fichiers de test
FILES = test_isalpha \
        test_isdigit \
        test_isalnum \
        test_isprint \
        test_isascii \
        test_strlen \
        test_memset \
        test_bzero \
        test_memcpy \
        test_memmove \
        test_strlcpy \
        test_strlcat \
        test_toupper \
        test_tolower \
        test_strchr \
        test_strrchr \
        test_strncmp \
        test_memchr \
        test_memcmp \
        test_strnstr \
        test_atoi \
        test_calloc \
        test_strdup

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