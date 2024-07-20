#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_memcmp("Hello", "Hello", 5) != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_memcmp("Hello", "Hellz", 5) != ('o' - 'z'))
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_memcmp("Hello", "Hel", 3) != 0)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_memcmp\n");
    }
    else
    {
        printf("Some tests failed for ft_memcmp\n");
    }

    return 0;
}
