#include "libft.h"
/*
* The function converts a lower-case letter 
* to the corresponding upper-case letter.
*/
int    ft_toupper(int c)
{
    if (c <= 122 && c >= 97 )
        return (c -32);
    return (c);
}