#include "libft.h"
/*
* Compare between 2 String and return 0 if they are similar
* -1 if s2 is greater than s1, and 1 if the opposite happens
*/
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
                return -1;
            else 
                return 1;
        }
    i++;
    }
    return (0);
}