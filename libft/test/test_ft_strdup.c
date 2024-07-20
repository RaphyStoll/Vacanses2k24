#include "../libft.h"

int main()
{
    int passed_tests = 1;
    char *dup = ft_strdup("Hello");

    if (dup == NULL || strcmp(dup, "Hello") != 0)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_strdup\n");
    }
    else
    {
        printf("Some tests failed for ft_strdup\n");
    }

    free(dup);
    return 0;
}
