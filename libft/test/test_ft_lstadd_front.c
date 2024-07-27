#include "../libft.h"

void run_test(t_list **lst, t_list *new, t_list *expected, const char *test_name)
{
    ft_lstadd_front(lst, new);
    if (*lst == new && new->next == expected)
    {
        // Test passed
    }
    else
    {
        printf("Test %s: failed\n", test_name);
        return;
    }
}

int main()
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");
    t_list *node4 = ft_lstnew("Fourth");
    t_list *node5 = ft_lstnew("Fifth");

    run_test(&head, node1, NULL, "test1");    // Test adding to an empty list
    run_test(&head, node2, node1, "test2");   // Test adding to a list with one element
    run_test(&head, node3, node2, "test3");   // Test adding to a list with two elements
    run_test(&head, node4, node3, "test4");   // Test adding to a list with three elements
    run_test(&head, node5, node4, "test5");   // Test adding to a list with four elements

    t_list *node6 = ft_lstnew("Sixth");
    run_test(&head, node6, node5, "test6");   // Test adding to a list with five elements

    t_list *node7 = ft_lstnew("Seventh");
    run_test(&head, node7, node6, "test7");   // Test adding to a list with six elements

    t_list *node8 = ft_lstnew("Eighth");
    run_test(&head, node8, node7, "test8");   // Test adding to a list with seven elements

    t_list *node9 = ft_lstnew("Ninth");
    run_test(&head, node9, node8, "test9");   // Test adding to a list with eight elements

    t_list *node10 = ft_lstnew("Tenth");
    run_test(&head, node10, node9, "test10"); // Test adding to a list with nine elements

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