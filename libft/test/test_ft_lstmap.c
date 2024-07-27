#include "../libft.h"

void *increment(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (new_content == NULL)
        return NULL;
    *new_content = *(int *)content + 1;
    return new_content;
}

void del(void *content)
{
    free(content);
}

void run_test(t_list *lst, int *expected_values, int size, const char *test_name)
{
    t_list *new_lst = ft_lstmap(lst, increment, del);
    int i = 0;
    t_list *current = new_lst;
    while (current)
    {
        if (*(int *)(current->content) != expected_values[i])
        {
            printf("Test %s: failed at index %d (expected %d, got %d)\n", test_name, i, expected_values[i], *(int *)(current->content));
            ft_lstclear(&new_lst, del);
            return;
        }
        current = current->next;
        i++;
    }

    if (i != size)
    {
        printf("Test %s: failed (expected list size %d, got %d)\n", test_name, size, i);
    }
    else
    {
        printf("Test %s: passed\n", test_name);
    }
    ft_lstclear(&new_lst, del);
}

int main()
{
    int *value1 = malloc(sizeof(int));
    int *value2 = malloc(sizeof(int));
    int *value3 = malloc(sizeof(int));
    int *value4 = malloc(sizeof(int));
    int *value5 = malloc(sizeof(int));
    *value1 = 1;
    *value2 = 2;
    *value3 = 3;
    *value4 = 4;
    *value5 = 5;

    t_list *node1 = ft_lstnew(value1);
    t_list *node2 = ft_lstnew(value2);
    t_list *node3 = ft_lstnew(value3);
    t_list *node4 = ft_lstnew(value4);
    t_list *node5 = ft_lstnew(value5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    int expected_values1[] = {2, 3, 4, 5, 6};
    run_test(node1, expected_values1, 5, "test1"); // Test list with 5 elements

    t_list *head = NULL;
    run_test(head, NULL, 0, "test2"); // Test empty list

    // Recreate list with different values
    *value1 = 10;
    *value2 = 20;
    *value3 = 30;
    *value4 = 40;
    *value5 = 50;

    node1 = ft_lstnew(value1);
    node2 = ft_lstnew(value2);
    node3 = ft_lstnew(value3);
    node4 = ft_lstnew(value4);
    node5 = ft_lstnew(value5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    int expected_values2[] = {11, 21, 31, 41, 51};
    run_test(node1, expected_values2, 5, "test3"); // Test list with different values

    // Single element list
    int *value6 = malloc(sizeof(int));
    *value6 = 100;
    t_list *node6 = ft_lstnew(value6);

    int expected_values3[] = {101};
    run_test(node6, expected_values3, 1, "test4"); // Test single element list

    // Recreate list with more elements
    *value1 = -1;
    *value2 = -2;
    *value3 = -3;
    *value4 = -4;
    *value5 = -5;

    node1 = ft_lstnew(value1);
    node2 = ft_lstnew(value2);
    node3 = ft_lstnew(value3);
    node4 = ft_lstnew(value4);
    node5 = ft_lstnew(value5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    int expected_values4[] = {0, -1, -2, -3, -4};
    run_test(node1, expected_values4, 5, "test5"); // Test list with negative values

    printf("All tests passed\n");

    // Clean up allocated memory
    free(value1);
    free(value2);
    free(value3);
    free(value4);
    free(value5);
    free(value6);
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    free(node6);

    return 0;
}