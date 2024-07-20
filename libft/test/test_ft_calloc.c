#include "../libft.h"

int main()
{
    int passed_tests = 1;
    int *array = ft_calloc(5, sizeof(int));

    if (array == NULL)
    {
        printf("Test 1 failed\n");
        passed_tests = 0;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (array[i] != 0)
            {
                printf("Test 2 failed\n");
                passed_tests = 0;
                break;
            }
        }
    }

    if (passed_tests)
    {
        printf("All tests passed for ft_calloc\n");
    }
    else
    {
        printf("Some tests failed for ft_calloc\n");
    }

    free(array);
    return 0;
}
