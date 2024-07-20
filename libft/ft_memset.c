#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *p = b;
    
    while (i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (b);
}