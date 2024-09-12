#include <stdlib.h>
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *temp_src;
    unsigned char *temp_dst;

    size_t i;
    i = 0;

    if (!src && !dst)
    {
        return NULL;
    }

    temp_dst = (unsigned char *)dst;
    temp_src = (unsigned char *)src;

    /* if src and dst are overlapping */
    if (dst > src)
    {
        while (len-- > 0)
        {
            temp_dst[len] = temp_src[len];
        }
    }else
    {
        while(i < len)
        {
            temp_dst[i] = temp_src[i];
            i++;
        }
    }
    return (dst);
}