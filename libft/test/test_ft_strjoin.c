#include "../libft.h"

int main()
{
    int passed_tests = 1;
    char *result;

    // Test 1 : Concatenation de deux chaînes normales
    result = ft_strjoin("Hello", "World");
    if (strcmp(result, "HelloWorld") != 0)
    {
        printf("Test 1 failed: attendu 'HelloWorld', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 2 : Concatenation avec une chaîne vide au début
    result = ft_strjoin("", "World");
    if (strcmp(result, "World") != 0)
    {
        printf("Test 2 failed: attendu 'World', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 3 : Concatenation avec une chaîne vide à la fin
    result = ft_strjoin("Hello", "");
    if (strcmp(result, "Hello") != 0)
    {
        printf("Test 3 failed: attendu 'Hello', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 4 : Concatenation de deux chaînes vides
    result = ft_strjoin("", "");
    if (strcmp(result, "") != 0)
    {
        printf("Test 4 failed: attendu '', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 5 : Concatenation avec une chaîne NULL au début
    result = ft_strjoin(NULL, "World");
    if (result != NULL)
    {
        printf("Test 5 failed: attendu 'NULL', obtenu '%s'\n", result);
        passed_tests = 0;
    }

    // Test 6 : Concatenation avec une chaîne NULL à la fin
    result = ft_strjoin("Hello", NULL);
    if (result != NULL)
    {
        printf("Test 6 failed: attendu 'NULL', obtenu '%s'\n", result);
        passed_tests = 0;
    }

    // Test 7 : Concatenation avec deux chaînes NULL
    result = ft_strjoin(NULL, NULL);
    if (result != NULL)
    {
        printf("Test 7 failed: attendu 'NULL', obtenu '%s'\n", result);
        passed_tests = 0;
    }

    // Test 8 : Concatenation de chaînes avec des espaces
    result = ft_strjoin("Hello ", "World");
    if (strcmp(result, "Hello World") != 0)
    {
        printf("Test 8 failed: attendu 'Hello World', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 9 : Concatenation de chaînes avec des caractères spéciaux
    result = ft_strjoin("Hello", " \n\tWorld");
    if (strcmp(result, "Hello \n\tWorld") != 0)
    {
        printf("Test 9 failed: attendu 'Hello \n\tWorld', obtenu '%s'\n", result);
        passed_tests = 0;
    }
    free(result);

    // Test 10 : Concatenation de chaînes longues
    char *long_str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char *long_str2 = "Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    result = ft_strjoin(long_str1, long_str2);
    char *expected_result = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    if (strcmp(result, expected_result) != 0)
    {
        printf("Test 10 failed: attendu '%s', obtenu '%s'\n", expected_result, result);
        passed_tests = 0;
    }
    free(result);

    if (passed_tests)
    {
        printf("Tous les tests sont passés pour ft_strjoin\n");
    }
    else
    {
        printf("Certains tests ont échoué pour ft_strjoin\n");
    }

    return 0;
}