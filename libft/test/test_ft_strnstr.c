#include "../libft.h"

int main()
{
    int passed_tests = 1;
    if (ft_strnstr("Hello, World!", "World", 13) != &"Hello, World!"[7])
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    if (ft_strnstr("Hello, World!", "World", 5) != NULL)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }
    if (ft_strnstr("Hello, World!", "", 13) != "Hello, World!")
    {
        printf("Test 3 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strnstr\n");
    }
    else
    {
        printf("Some tests failed for ft_strnstr\n");
    }

    return 0;
}
