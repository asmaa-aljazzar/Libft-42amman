#include "libft.h"
static char *find_string(const char *haystack, const char *needle, size_t h, size_t n, size_t len);

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!haystack)
        return (NULL);
    if (needle[0] == '\0')
        return ((char *) haystack);
    size_t newlen;
    size_t h;
    size_t n;
    
    newlen = ft_strlen(haystack);
    h = 0;
    n = 0;
    if (len > newlen)
        len = newlen;
    return (find_string(haystack, needle, h, n, len));
}

static char *find_string(const char *haystack, const char *needle, size_t h, size_t n, size_t len)
{
    while (haystack[h] && h < len)
    {
        n = 0;
        while (haystack[h + n] == needle[n] && haystack[h + n] && (h + n) < len)
        {
            n++;
            if (needle[n] == 0)
                return ((char *)haystack + h);
        }
        h++;
    }
    return (NULL);
}