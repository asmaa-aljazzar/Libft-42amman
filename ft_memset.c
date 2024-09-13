#include "libft.h"
/*
* The porpose of memset is to fill the memeory 
* with a single byte repeated accross all positions 
* each byte in memory must be assigned the same value
*/
void    *ft_memset(void *ptr, int value, size_t len)
{
    if (ptr == NULL) {
        return (NULL);
    }
    unsigned char *temp;
    temp = (unsigned char *)ptr;
    while(len > 0)
    {
        *temp++ = (unsigned char )value;
        len--;
    }
    return (ptr);
}
