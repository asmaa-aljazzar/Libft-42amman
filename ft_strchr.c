#include "libft.h"
/*
* Search for specific char ( first appearing )in a string and return pointer to it
*/

char *ft_strchr(const char *s, int c)
{
    
    int i;
    char c2;
    i = 0;
    c2 = (char) c;
    while (s[i])
    {
        if (s[i] == c2)
            return ((char *)&s[i]);
        i++;
    }
    if(s[i] == c2)
        return ((char *)&s[i]);
    return NULL;
}