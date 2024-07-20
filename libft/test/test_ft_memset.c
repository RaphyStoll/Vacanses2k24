#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[50];
    int passed_tests = 1;

    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    if (strcmp(buffer, "AAAAAAAAAA") != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    ft_memset(buffer, 'B', 5);
    buffer[5] = '\0';
    if (strcmp(buffer, "BBBBB") != 0)
    {
        printf("Test 2 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_memset\n");
    }
    else
    {
        printf("Some tests failed for ft_memset\n");
    }

    return 0;
}
