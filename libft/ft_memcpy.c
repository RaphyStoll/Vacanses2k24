#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d = dst;
    const unsigned char *s = src;
    
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
