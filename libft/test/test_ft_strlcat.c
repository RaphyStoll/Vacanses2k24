#include "../libft.h"

int main()
{
    char dest[50] = "Hello";
    int passed_tests = 1;

    ft_strlcat(dest, ", World!", 50);
    if (strcmp(dest, "Hello, World!") != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    ft_strlcat(dest, " This is a test", 50);
    if (strcmp(dest, "Hello, World! This is a test") != 0)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strlcat\n");
    }
    else
    {
        printf("Some tests failed for ft_strlcat\n");
    }

    return 0;
}
