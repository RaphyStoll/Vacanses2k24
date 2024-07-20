#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_memchr("Hello", 'e', 5) != &"Hello"[1])
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_memchr("Hello", 'z', 5) != NULL)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_memchr("Hello, World!", 'o', 13) != &"Hello, World!"[4])
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_memchr\n");
    }
    else
    {
        printf("Some tests failed for ft_memchr\n");
    }

    return 0;
}