#include "../libft.h"

typedef struct {
    char c;
    const char *expected;
    const char *test_name;
} test_case;

void run_test(test_case t, int *failed_tests, int *total_tests)
{
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Failed to open test_output.txt");
        return;
    }

    ft_putchar_fd(t.c, fd);
    close(fd);

    fd = open("test_output.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Failed to open test_output.txt");
        return;
    }

    char buffer[2];
    ssize_t bytes_read = read(fd, buffer, 1);
    close(fd);

    buffer[1] = '\0';  // Null-terminate the string

    (*total_tests)++;
    if (bytes_read != 1 || strcmp(buffer, t.expected) != 0)
    {
        printf("Test %s: failed (expected \"%s\", got \"%s\")\n", t.test_name, t.expected, buffer);
        (*failed_tests)++;
    }
}

int main()
{
    test_case tests[] = {
        {'a', "a", "test1"},
        {'Z', "Z", "test2"},
        {'0', "0", "test3"},
        {'\n', "\n", "test4"},
        {' ', " ", "test5"},
        {'@', "@", "test6"},
        {'9', "9", "test7"},
        {'b', "b", "test8"},
        {'1', "1", "test9"},
        {'!', "!", "test10"}
    };

    int failed_tests = 0;
    int total_tests = 0;

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
    {
        run_test(tests[i], &failed_tests, &total_tests);
    }

    if (failed_tests == 0)
    {
        printf("All tests passed\n");
    }

    return 0;
}