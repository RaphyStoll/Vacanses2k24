#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t total_size = count * size;
    
    ptr = malloc(total_size);
    if (!ptr)
    {
        return (NULL);
    }
    ft_memset(ptr, 0, total_size);
    return (ptr);
}