#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[50] = "Hello, World!";
	int passed_tests = 1;

	ft_memmove(dest + 7, dest, 5);
	if (strncmp(dest + 7, "Hello", 5) != 0)
	{
		printf("Test 1 failed\n");
		passed_tests = 0;
	}

	ft_memmove(dest, dest + 7, 5);
	if (strncmp(dest, "Hello", 5) != 0)
	{
		printf("Test 2 failed\n");
		passed_tests = 0;
	}

	if (passed_tests)
	{
		printf("All tests passed for ft_memmove\n");
	}
	else
	{
		printf("Some tests failed for ft_memmove\n");
	}

	return 0;
}