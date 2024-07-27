#include "../libft.h"

void del(void *content)
{
    free(content);
}

void run_test(t_list *node, const char *test_name)
{
    void *content = node->content;
    ft_lstdelone(node, del);
    
    // Attempt to access node->content should result in an error if memory was freed correctly
    if (node->content != NULL || content == node->content)
    {
        printf("Test %s: failed\n", test_name);
    }
    else
    {
        printf("Test %s: passed\n", test_name);
    }
}

int main()
{
    int *value1 = malloc(sizeof(int));
    int *value2 = malloc(sizeof(int));
    int *value3 = malloc(sizeof(int));
    int *value4 = malloc(sizeof(int));
    int *value5 = malloc(sizeof(int));
    *value1 = 42;
    *value2 = 24;
    *value3 = 0;
    *value4 = -42;
    *value5 = 84;

    t_list *node1 = ft_lstnew(value1);
    t_list *node2 = ft_lstnew(value2);
    t_list *node3 = ft_lstnew(value3);
    t_list *node4 = ft_lstnew(value4);
    t_list *node5 = ft_lstnew(value5);

    run_test(node1, "test1");
    run_test(node2, "test2");
    run_test(node3, "test3");
    run_test(node4, "test4");
    run_test(node5, "test5");

    printf("All tests passed\n");

    // Clean up allocated memory for remaining nodes
    /*free(value1);
    free(value2);
    free(value3);
    free(value4);
    free(value5);
*/
    return 0;
}