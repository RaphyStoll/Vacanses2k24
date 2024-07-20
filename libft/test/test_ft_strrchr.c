#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_strrchr("Hello", 'l') != &"Hello"[3])
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_strrchr("Hello", 'H') != &"Hello"[0])
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_strrchr("Hello", 'z') != NULL)
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strrchr\n");
    }
    else
    {
        printf("Some tests failed for ft_strrchr\n");
    }

    return 0;
}
