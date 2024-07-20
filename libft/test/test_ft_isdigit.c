#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_isdigit('0') != 1)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_isdigit('9') != 1)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_isdigit('a') != 0)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }
    if (ft_isdigit(' ') != 0)
    {
        printf("Test 4 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_isdigit\n");
    }
    else
    {
        printf("Some tests failed for ft_isdigit\n");
    }

    return 0;
}