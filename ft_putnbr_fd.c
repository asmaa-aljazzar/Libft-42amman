#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char result;

    if (n == -2147483647){
        write (fd, "-2147483648", 11);
        return;
    }
    if (n < 0){
        write (fd, "-", 1);
        n = -n;
    }
    else{
        if(n > 9)
        {
            ft_putnbr_fd(n/10, fd);
            ft_putnbr_fd(n%10, fd);
        }
        else
        {
            result = n + 48;
            write(fd, &result, 1);
        }
    }
}
