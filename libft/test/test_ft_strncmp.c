#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_strncmp("Hello", "Hello", 5) != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_strncmp("Hello", "Hello", 5) != 0)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_strncmp("Hello", "Hel", 3) != 0)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strncmp\n");
    }
    else
    {
        printf("Some tests failed for ft_strncmp\n");
    }

    return 0;
}
