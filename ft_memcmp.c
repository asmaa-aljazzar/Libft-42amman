#include "libft.h"
/*
* Similar to strncmp but memcmp take a void pointer 
* to deal with bytes
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            if ((str1[i] - str2[i]) > 0)
                return (1);
            else 
            return (-1);
        }
        i++;
    }
    return (0);
}