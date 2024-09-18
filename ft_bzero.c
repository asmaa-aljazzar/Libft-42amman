#include "libft.h"
/*
* Fill memory bytes by zeros
*/
void    ft_bzero(void *ptr, size_t len)
{
    if (ptr == NULL){
        write(1, "Null ",5);
        return;
    }
    char *temp;
    temp = (char *)ptr;
    while(len > 0)
    {
        *temp++ = 0;
        len--;
    }
}
