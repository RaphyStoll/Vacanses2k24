#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_toupper('a') != 'A')
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_toupper('A') != 'A')
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_toupper('1') != '1')
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_toupper\n");
    }
    else
    {
        printf("Some tests failed for ft_toupper\n");
    }

    return 0;
}
