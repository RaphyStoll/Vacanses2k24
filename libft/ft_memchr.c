#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *p = s;
    
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
        {
            return ((void *)&p[i]);
        }
        i++;
    }
    return (NULL);
}
