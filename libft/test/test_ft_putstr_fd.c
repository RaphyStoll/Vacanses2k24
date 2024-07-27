#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    char *str;
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

    ft_putstr_fd(t.str, fd);
    close(fd);

    fd = open("test_output.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Failed to open test_output.txt");
        return;
    }

    char buffer[1024];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    close(fd);

    if (bytes_read < 0)
    {
        perror("Failed to read test_output.txt");
        return;
    }

    buffer[bytes_read] = '\0';  // Null-terminate the string

    (*total_tests)++;
    if (strcmp(buffer, t.expected) != 0)
    {
        printf("Test %s: failed (expected \"%s\", got \"%s\")\n", t.test_name, t.expected, buffer);
        (*failed_tests)++;
    }
}

int main()
{
    test_case tests[] = {
        {"Hello, world!", "Hello, world!", "test1"},
        {"", "", "test2"},
        {"42", "42", "test3"},
        {"The quick brown fox jumps over the lazy dog", "The quick brown fox jumps over the lazy dog", "test4"},
        {"Lorem ipsum dolor sit amet", "Lorem ipsum dolor sit amet", "test5"},
        {"1234567890", "1234567890", "test6"},
        {"\nNew Line", "\nNew Line", "test7"},
        {"Special characters !@#$%^&*()", "Special characters !@#$%^&*()", "test8"},
        {"Mix3d C@se", "Mix3d C@se", "test9"},
        {"End of tests", "End of tests", "test10"}
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