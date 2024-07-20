#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char *d = dst;
    const unsigned char *s = src;
    
    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return (dst);
}
