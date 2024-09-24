#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    if (s)
    {
    unsigned int len = ft_strlen(s);
    write(fd, s, len);
    }
}