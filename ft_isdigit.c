#include "libft.h"
/* 
* This Function Check if the character is number or not
* If the character is a number it will return a non-zero number
* Else it will return zero
*/
int    ft_isdigit(int c){
    if (c <= 57 && c >= 48)
        return (1);
    return (0);
}

