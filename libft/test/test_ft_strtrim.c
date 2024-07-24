#include "../libft.h"

int main()
{
    int passed_tests = 1;
    char *result;

    // Test 1 : Trimer les espaces au début et à la fin
    result = ft_strtrim("  Hello, World!  ", " ");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 1 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 2 : Trimer les tabulations et les nouvelles lignes
    result = ft_strtrim("\t\nHello, World!\n\t", "\t\n");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 2 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 3 : Trimer les caractères spécifiques
    result = ft_strtrim("abcHello, World!cba", "abc");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 3 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 4 : Chaîne sans caractères à trimer
    result = ft_strtrim("Hello, World!", " ");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 4 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 5 : Trimer une chaîne vide
    result = ft_strtrim("", " ");
    if (strcmp(result, "") != 0)
    {
        printf("Test 5 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 6 : Trimer avec un set vide
    result = ft_strtrim("Hello, World!", "");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 6 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 7 : Trimer avec tous les caractères à trimer
    result = ft_strtrim("abcabc", "abc");
    if (strcmp(result, "") != 0)
    {
        printf("Test 7 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 8 : Trimer les caractères en milieu de chaîne
    result = ft_strtrim("aHello, World!a", "a");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 8 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 9 : Trimer les espaces et tabulations en début et fin
    result = ft_strtrim(" \tHello, World!\t ", " \t");
    if (strcmp(result, "Hello, World!") != 0)
    {
        printf("Test 9 failed: attendu 'Hello, World!', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 10 : Trimer avec une chaîne complète
    result = ft_strtrim("Hello, World!", "Hello, World!");
    if (strcmp(result, "") != 0)
    {
        printf("Test 10 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    if (passed_tests)
    {
        printf("Tous les tests sont passés pour ft_strtrim\n");
    }
    else
    {
        printf("Certains tests ont échoué pour ft_strtrim\n");
    }

    return 0;
}