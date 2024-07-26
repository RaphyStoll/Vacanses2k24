#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction de transformation pour les tests
void test_transform(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = (*c >= 'a' && *c <= 'z') ? *c - 'a' + 'A' : *c;
    else
        *c = (*c >= 'A' && *c <= 'Z') ? *c - 'A' + 'a' : *c;
}

// Fonction de test
void run_test(char *input, char *expected, const char *test_name)
{
    char *s = strdup(input);
    ft_striteri(s, test_transform);
    if (strcmp(s, expected) == 0)
        printf("Test %s: passed\n", test_name);
    else
    {
        printf("Test %s: failed (expected \"%s\", got \"%s\")\n", test_name, expected, s);
    }
    free(s);
}

int main()
{
    run_test("abcde", "AbCdE", "test1");
    run_test("ABCDE", "AbCdE", "test2");
    run_test("12345", "12345", "test3");
    run_test("a1b2c3", "A1b2C3", "test4");
    run_test("", "", "test5");
    run_test("a", "A", "test6");
    run_test("Z", "z", "test7");
    run_test("Hello World!", "HeLlO WoRlD!", "test8");
    run_test("HeLlO WoRlD!", "HeLlO WoRlD!", "test9");
    run_test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "AbCdEfGhIjKlMnOpQrStUvWxYz", "test10");

    return 0;
}