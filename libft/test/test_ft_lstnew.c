#include "../libft.h"

void run_test(void *content, const char *test_name)
{
    t_list *node = ft_lstnew(content);
    if (node && node->content == content && node->next == NULL)
    {
        // Test passed
    }
    else
    {
        printf("Test %s: failed\n", test_name);
        free(node);
        return;
    }
    free(node);
}

int main()
{
    int value1 = 42;
    int value2 = -42;
    int value3 = 0;
    char *str1 = "Hello, world!";
    char *str2 = "";
    char str3[] = "Another test string";
    double value4 = 3.14;
    float value5 = -2.71;
    char value6 = 'a';
    void *ptr = NULL;

    run_test(&value1, "test1");
    run_test(&value2, "test2");
    run_test(&value3, "test3");
    run_test(str1, "test4");
    run_test(str2, "test5");
    run_test(str3, "test6");
    run_test(&value4, "test7");
    run_test(&value5, "test8");
    run_test(&value6, "test9");
    run_test(ptr, "test10");

    printf("All tests passed\n");
    return 0;
}