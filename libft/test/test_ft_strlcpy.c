#include "../libft.h"


int main()
{
    char dest[50];
    int passed_tests = 1;

    ft_strlcpy(dest, "Hello", 6);
    if (strcmp(dest, "Hello") != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    ft_strlcpy(dest, "Hello, World!", 6);
    if (strcmp(dest, "Hello") != 0)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strlcpy\n");
    }
    else
    {
        printf("Some tests failed for ft_strlcpy\n");
    }

    return 0;
}