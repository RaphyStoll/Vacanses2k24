#include "../libft.h"

// * Fonction pour exécuter les tests de `ft_split`
void test_split(char *str, char delimiter, char **expected, int test_num, const char *test_name, int *passed_tests)
{
    char **result = ft_split(str, delimiter);
    int i = 0;

    while (expected[i] != NULL)
    {
        if (result[i] == NULL || strcmp(result[i], expected[i]) != 0)
        {
            // ! Test échoué
            printf("Test %d (%s) failed at element %d: attendu '%s', obtenu '%s'\n", test_num, test_name, i, expected[i], result[i] ? result[i] : "NULL");
            *passed_tests = 0;
            break;
        }
        i++;
    }
    if (result[i] != NULL && *passed_tests)
    {
        // ! Résultat plus long que prévu
        printf("Test %d (%s) failed: résultat plus long que prévu\n", test_num, test_name);
        *passed_tests = 0;
    }

    // Libération de la mémoire allouée
    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
}

int main(void)
{
    int passed_tests = 1;

    // * Déclaration des chaînes de test et leurs résultats attendus
    char *str1 = "Hello World";
    char *expected1[] = {"Hello", "World", NULL};

    char *str2 = "Hello,World,42";
    char *expected2[] = {"Hello", "World", "42", NULL};

    char *str3 = ",Hello,World,";
    char *expected3[] = {"Hello", "World", NULL};

    char *str4 = "Hello,,World";
    char *expected4[] = {"Hello", "World", NULL};

    char *str5 = "42";
    char *expected5[] = {"42", NULL};

    char *str6 = "";
    char *expected6[] = {NULL};

    char *str7 = " , ";
    char *expected7[] = {" ", " ", NULL};

    char *str8 = "Hello ,World ";
    char *expected8[] = {"Hello", ",World", NULL};

    char *str9 = "    ";
    char *expected9[] = {NULL};

    char *str10 = "Hello, ,World";
    char *expected10[] = {"Hello", " ", "World", NULL};

    // ! Exécution des tests
    test_split(str1, ' ', expected1, 1, "Simple split", &passed_tests);
    test_split(str2, ',', expected2, 2, "Comma split", &passed_tests);
    test_split(str3, ',', expected3, 3, "Leading and trailing commas", &passed_tests);
    test_split(str4, ',', expected4, 4, "Empty element in split", &passed_tests);
    test_split(str5, ',', expected5, 5, "Single element, no delimiter", &passed_tests);
    test_split(str6, ',', expected6, 6, "Empty string", &passed_tests);
    test_split(str7, ',', expected7, 7, "Delimiter only with spaces", &passed_tests);
    test_split(str8, ' ', expected8, 8, "Mixed spaces and delimiters", &passed_tests);
    test_split(str9, ' ', expected9, 9, "Only spaces", &passed_tests);
    test_split(str10, ',', expected10, 10, "Mixed empty and non-empty elements", &passed_tests);

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