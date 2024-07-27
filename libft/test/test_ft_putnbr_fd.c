/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:53:50 by raphael           #+#    #+#             */
/*   Updated: 2024/07/27 11:54:27 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

typedef struct {
    int number;
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

    ft_putnbr_fd(t.number, fd);
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
        {0, "0", "test1"},
        {42, "42", "test2"},
        {-42, "-42", "test3"},
        {2147483647, "2147483647", "test4"},
        {-2147483648, "-2147483648", "test5"},
        {1234567890, "1234567890", "test6"},
        {-1234567890, "-1234567890", "test7"},
        {1, "1", "test8"},
        {-1, "-1", "test9"},
        {1000000, "1000000", "test10"}
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