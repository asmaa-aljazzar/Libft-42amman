#include "libft.h"
/*
* concatenate 2 strings in a new string.
* returns the new string; NULL if the memory allocation failed.
* if one of them is NULL we will return strdub from the other string.
*/

char    *ft_strjoin(const char *s1, const char *s2)
{
    if (!s1 && !s2)
        return (NULL);
    if (!s1)
    {
        return (ft_strdup(s2));
    }
    if (!s2)
    {
        return (ft_strdup(s1));
    }
    size_t s1_len;
    size_t s2_len;

    s1_len = ft_strlen(s1); 
    s2_len = ft_strlen(s2); 
    char    *result = malloc(s1_len + s2_len + 1);
    if (!result)
        return (NULL);
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}
