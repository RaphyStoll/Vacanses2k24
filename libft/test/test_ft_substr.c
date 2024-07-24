#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
    int passed_tests = 1;
    char *result;

    // Test 1 : Sous-chaîne depuis le début
    result = ft_substr("Hello, World!", 0, 5);
    if (strcmp(result, "Hello") != 0)
    {
        printf("Test 1 failed: attendu 'Hello', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 2 : Sous-chaîne depuis le milieu
    result = ft_substr("Hello, World!", 7, 5);
    if (strcmp(result, "World") != 0)
    {
        printf("Test 2 failed: attendu 'World', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 3 : Sous-chaîne avec une longueur supérieure à la chaîne restante
    result = ft_substr("Hello, World!", 7, 20);
    if (strcmp(result, "World!") != 0)
    {
        printf("Test 3 failed: attendu 'World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 4 : Sous-chaîne depuis la fin
    result = ft_substr("Hello, World!", 13, 5);
    if (strcmp(result, "") != 0)
    {
        printf("Test 4 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 5 : Chaîne vide
    result = ft_substr("", 0, 5);
    if (strcmp(result, "") != 0)
    {
        printf("Test 5 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 6 : Début au-delà de la longueur de la chaîne
    result = ft_substr("Hello", 10, 5);
    if (strcmp(result, "") != 0)
    {
        printf("Test 6 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 7 : Longueur de 0
    result = ft_substr("Hello", 2, 0);
    if (strcmp(result, "") != 0)
    {
        printf("Test 7 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 8 : Chaîne d'entrée NULL
    result = ft_substr(NULL, 0, 5);
    if (result != NULL)
    {
        printf("Test 8 failed: attendu 'NULL', obtenu '%s'\n", result);
        passed_tests = 0;
    }

    // Test 9 : Cas normal
    result = ft_substr("Libft", 2, 3);
    if (strcmp(result, "bft") != 0)
    {
        printf("Test 9 failed: attendu 'bft', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 10 : Chaîne complète
    result = ft_substr("Hello, World!", 0, 13);
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 10 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    if (passed_tests)
    {
        printf("Tous les tests sont passés pour ft_substr\n");
    }
    else
    {
        printf("Certains tests ont échoué pour ft_substr\n");
    }

    return 0;
}
