#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_strlen("") != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_strlen("Hello") != 5)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_strlen("Hello, World!") != 13)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strlen\n");
    }
    else
    {
        printf("Some tests failed for ft_strlen\n");
    }

    return 0;
}
