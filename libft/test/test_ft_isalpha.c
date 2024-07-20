#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_isalpha('a') != 1)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_isalpha('Z') != 1)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_isalpha('1') != 0)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }
    if (ft_isalpha(' ') != 0)
    {
        printf("Test 4 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_isalpha\n");
    }
    else
    {
        printf("Some tests failed for ft_isalpha\n");
    }

    return 0;
}