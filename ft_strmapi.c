#include "libft.h"
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    if (!s)
        return (NULL);
    unsigned int i;
    char *result;

    result = malloc ((ft_strlen(s) + 1) * sizeof(char));
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}
