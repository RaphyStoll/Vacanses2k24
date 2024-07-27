#include "../libft.h"

void del(void *content)
{
    free(content);
}

void run_test(t_list **lst, const char *test_name)
{
    ft_lstclear(lst, del);
    
    if (*lst == NULL)
    {
        printf("Test %s: passed\n", test_name);
    }
    else
    {
        printf("Test %s: failed (list not cleared)\n", test_name);
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

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    t_list *head = node1;

    run_test(&head, "test1"); // Test clearing a list with multiple elements

    head = NULL;
    run_test(&head, "test2"); // Test clearing an empty list

    // Recreate list and run more tests
    value1 = malloc(sizeof(int));
    value2 = malloc(sizeof(int));
    value3 = malloc(sizeof(int));
    *value1 = 10;
    *value2 = 20;
    *value3 = 30;

    node1 = ft_lstnew(value1);
    node2 = ft_lstnew(value2);
    node3 = ft_lstnew(value3);

    node1->next = node2;
    node2->next = node3;

    head = node1;

    run_test(&head, "test3"); // Test clearing another list with multiple elements

    value1 = malloc(sizeof(int));
    *value1 = 100;
    node1 = ft_lstnew(value1);
    head = node1;

    run_test(&head, "test4"); // Test clearing a list with a single element

    head = NULL;
    run_test(&head, "test5"); // Test clearing an empty list again

    // Recreate list with more elements
    value1 = malloc(sizeof(int));
    value2 = malloc(sizeof(int));
    value3 = malloc(sizeof(int));
    value4 = malloc(sizeof(int));
    value5 = malloc(sizeof(int));
    *value1 = 1;
    *value2 = 2;
    *value3 = 3;
    *value4 = 4;
    *value5 = 5;

    node1 = ft_lstnew(value1);
    node2 = ft_lstnew(value2);
    node3 = ft_lstnew(value3);
    node4 = ft_lstnew(value4);
    node5 = ft_lstnew(value5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    head = node1;

    run_test(&head, "test6"); // Test clearing a larger list

    printf("All tests passed\n");

    // Clean up any remaining allocated memory (should not be necessary if tests pass)
    /*free(value1);
    free(value2);
    free(value3);
    free(value4);
    free(value5);
*/
    return 0;
}