#include <stdio.h>
#include <string.h>
#include "../libft.h"

// Fonction de transformation pour les tests
char my_func(unsigned int i, char c)
{
    return c + i;
}

// * Fonction pour exécuter les tests de `ft_strmapi`
void test_strmapi(char *s, char (*f)(unsigned int, char), const char *expected, int test_num, const char *test_name, int *passed_tests)
{
    char *result = ft_strmapi(s, f);
    if (strcmp(result, expected) != 0)
    {
        // ! Test échoué
        printf("Test %d (%s) failed: attendu '%s', obtenu '%s'\n", test_num, test_name, expected, result);
        *passed_tests = 0;
    }
    free(result); // Libération de la mémoire allouée par ft_strmapi
}

int main(void)
{
    int passed_tests = 1;

    // * Déclaration des tests et leurs résultats attendus
    test_strmapi("abc", my_func, "ace", 1, "Simple case", &passed_tests);
    test_strmapi("", my_func, "", 2, "Empty string", &passed_tests);
    test_strmapi("42", my_func, "43", 3, "Numbers in string", &passed_tests);
    test_strmapi("Hello", my_func, "Hfnos", 4, "Mixed case", &passed_tests);
    test_strmapi("ABCDE", my_func, "ACEGI", 5, "Uppercase letters", &passed_tests);
    test_strmapi("12345", my_func, "13579", 6, "Sequential numbers", &passed_tests);
    test_strmapi("!@#", my_func, "!A%", 7, "Special characters", &passed_tests);
    test_strmapi("a", my_func, "a", 8, "Single character", &passed_tests);
    test_strmapi("  ", my_func, " !", 9, "Whitespace", &passed_tests);
    test_strmapi("a1!", my_func, "a2#", 10, "Mixed characters", &passed_tests);

    // * Afficher le résultat global des tests
    if (passed_tests)
    {
        // ! Tous les tests sont passés
        printf("Test passed\n");
    }
    else
    {
        // ! Certains tests ont échoué
        printf("Test failed\n");
    }

    return 0;
}