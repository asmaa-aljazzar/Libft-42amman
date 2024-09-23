#include "libft.h"

/* 
* This Function Check if the character is alphabet or not
* If the character is an alphabet it will return a non-zero number
* Else it will return zero
*/
int    ft_isalpha(int c)
{
    if ((c > 96 && c < 123) || (c > 64 && c < 91))
        return (1);
    return (0);
}