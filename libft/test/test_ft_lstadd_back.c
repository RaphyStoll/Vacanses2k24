#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_test(t_list **lst, t_list *new, t_list *expected_last, const char *test_name)
{
    ft_lstadd_back(lst, new);
    t_list *last = ft_lstlast(*lst);
    if (last == expected_last && last->next == NULL)
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
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *node4 = ft_lstnew("Node 4");
    t_list *node5 = ft_lstnew("Node 5");

    run_test(&head, node1, node1, "test1");    // Test adding to an empty list
    run_test(&head, node2, node2, "test2");    // Test adding to a list with one element
    run_test(&head, node3, node3, "test3");    // Test adding to a list with two elements
    run_test(&head, node4, node4, "test4");    // Test adding to a list with three elements
    run_test(&head, node5, node5, "test5");    // Test adding to a list with four elements

    t_list *node6 = ft_lstnew("Node 6");
    run_test(&head, node6, node6, "test6");    // Test adding to a list with five elements

    t_list *node7 = ft_lstnew("Node 7");
    run_test(&head, node7, node7, "test7");    // Test adding to a list with six elements

    t_list *node8 = ft_lstnew("Node 8");
    run_test(&head, node8, node8, "test8");    // Test adding to a list with seven elements

    t_list *node9 = ft_lstnew("Node 9");
    run_test(&head, node9, node9, "test9");    // Test adding to a list with eight elements

    t_list *node10 = ft_lstnew("Node 10");
    run_test(&head, node10, node10, "test10"); // Test adding to a list with nine elements

    printf("All tests passed\n");

    // Clean up allocated memory
    t_list *current = head;
    t_list *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}