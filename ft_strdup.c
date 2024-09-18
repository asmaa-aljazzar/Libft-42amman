#include "libft.h"
/*
* function allocates sufficient memory for a copy of the string s1.
* does the copy, and returns a pointer to it.
* The pointer may subsequently be used as an argument to the function free(3).
*/
char *ft_strdup(const char *s1)
{
    size_t len;
    
    len = ft_strlen(s1) + 1;
    char *dst = malloc(len);
    
    if (!dst)
        return (NULL);
    ft_memcpy( dst, s1, len);
    return (dst);
}