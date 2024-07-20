#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_atoi("42") != 42)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_atoi("-42") != -42)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_atoi("   42") != 42)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }
    if (ft_atoi("+42") != 42)
    {
        printf("Test 4 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_atoi\n");
    }
    else
    {
        printf("Some tests failed for ft_atoi\n");
    }

    return 0;
}
