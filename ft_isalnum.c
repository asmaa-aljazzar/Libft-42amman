#include "libft.h"
/* 
* Tests for any character for which isalpha() or isdigit() is true. 
* The value of the argument must be representable as an 
*/

 int    ft_isalnum(int c)
 {
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
 }