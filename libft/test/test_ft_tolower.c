#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_tolower('A') != 'a')
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_tolower('a') != 'a')
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_tolower('1') != '1')
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_tolower\n");
    }
    else
    {
        printf("Some tests failed for ft_tolower\n");
    }

    return 0;
}
