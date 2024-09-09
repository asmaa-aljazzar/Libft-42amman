#include <unistd.h>
/* 
* The function returns a non-zero value 
* if the character passed as an int parameter is an ASCII character 
* between 0 and decimal 127
*/
int    ft_isascii(int c){
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}