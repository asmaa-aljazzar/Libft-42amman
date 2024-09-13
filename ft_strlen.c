#include "libft.h"
// This function count the number of characters in a string
size_t    ft_strlen(const char *str)
{
    int     counter;

    counter = 0;
    if (str == NULL)
    {
        write(1, "NULL pointer:", 13);
        return (0);
    }
    else{
        while(*str++ != '\0')
        {
            counter++;
        }
        return (counter);
    }
}