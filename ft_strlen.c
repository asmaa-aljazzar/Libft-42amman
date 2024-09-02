// This function count the number of characters in a string
#include <unistd.h>
int    ft_strlen(char *str)
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