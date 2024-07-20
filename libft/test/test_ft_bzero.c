#include "../libft.h"

int main()
{
    char buffer[50];
    int passed_tests = 1;

    ft_bzero(buffer, 10);
    if (memcmp(buffer, "\0\0\0\0\0\0\0\0\0\0", 10) != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_bzero\n");
    }
    else
    {
        printf("Some tests failed for ft_bzero\n");
    }

    return 0;
}
