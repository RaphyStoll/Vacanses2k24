#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = ft_strlen(dst);
    size_t j = 0;
    
    if (dstsize <= i)
    {
        return (dstsize + ft_strlen(src));
    }
    
    while (src[j] != '\0' && i + 1 < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    
    return (ft_strlen(dst) + ft_strlen(src + j));
}
