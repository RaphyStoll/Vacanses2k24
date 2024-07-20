#include "../libft.h"

int main()
{
    char dest[50];
    char src[50] = "Hello, World!";
    int passed_tests = 1;

    ft_memcpy(dest, src, strlen(src) + 1);
    if (strcmp(dest, src) != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    ft_memcpy(dest + 6, src, 5);
    if (strncmp(dest + 6, src, 5) != 0)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_memcpy\n");
    }
    else
    {
        printf("Some tests failed for ft_memcpy\n");
    }

    return 0;
}
