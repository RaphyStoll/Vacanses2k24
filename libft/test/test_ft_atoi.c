#include "../libft.h"

int main()
{
    int passed_tests = 1;

    if (ft_atoi("42") != 42)
    {
        printf("Test 1 failed: expected 42, got %d\n", ft_atoi("42"));
        passed_tests = 0;
    }

    if (ft_atoi("-42") != -42)
    {
        printf("Test 2 failed: expected -42, got %d\n", ft_atoi("-42"));
        passed_tests = 0;
    }

    if (ft_atoi("    42") != 42)
    {
        printf("Test 3 failed: expected 42, got %d\n", ft_atoi("    42"));
        passed_tests = 0;
    }

    if (ft_atoi("42abc") != 42)
    {
        printf("Test 4 failed: expected 42, got %d\n", ft_atoi("42abc"));
        passed_tests = 0;
    }

    if (ft_atoi("abc42") != 0)
    {
        printf("Test 5 failed: expected 0, got %d\n", ft_atoi("abc42"));
        passed_tests = 0;
    }

    if (ft_atoi("") != 0)
    {
        printf("Test 6 failed: expected 0, got %d\n", ft_atoi(""));
        passed_tests = 0;
    }

    if (ft_atoi("+") != 0)
    {
        printf("Test 7 failed: expected 0, got %d\n", ft_atoi("+"));
        passed_tests = 0;
    }

    if (ft_atoi("-") != 0)
    {
        printf("Test 8 failed: expected 0, got %d\n", ft_atoi("-"));
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