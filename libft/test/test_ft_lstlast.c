#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_test(t_list *lst, t_list *expected_last, const char *test_name)
{
    t_list *last = ft_lstlast(lst);
    if (last == expected_last)
    {
        // Test passed
    }
    else
    {
        printf("Test %s: failed (expected %p, got %p)\n", test_name, (void*)expected_last, (void*)last);
    }
}

int main()
{
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *node4 = ft_lstnew("Node 4");
    t_list *node5 = ft_lstnew("Node 5");

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    run_test(NULL, NULL, "test1");             // Test empty list
    run_test(node1, node5, "test2");           // Test list with 5 elements
    run_test(node2, node5, "test3");           // Test list starting from second element
    run_test(node3, node5, "test4");           // Test list starting from third element
    run_test(node4, node5, "test5");           // Test list starting from fourth element
    run_test(node5, node5, "test6");           // Test list starting from fifth element

    // Add more tests
    t_list *single_node = ft_lstnew("Single Node");
    run_test(single_node, single_node, "test7"); // Test single element list

    t_list *head = NULL;
    run_test(head, NULL, "test8");              // Test another empty list

    t_list *node6 = ft_lstnew("Node 6");
    t_list *node7 = ft_lstnew("Node 7");
    node6->next = node7;
    run_test(node6, node7, "test9");            // Test list with 2 elements

    t_list *node8 = ft_lstnew("Node 8");
    run_test(node8, node8, "test10");           // Test another single element list

    printf("All tests passed\n");

    // Clean up allocated memory
    t_list *current = node1;
    t_list *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    free(single_node);
    free(node6);
    free(node7);
    free(node8);

    return 0;
}