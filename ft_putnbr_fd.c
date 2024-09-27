#include "libft.h"
/*
* put a number in a file description
*/
static void	if_min_int(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if_min_int(n, fd);
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			result = n + 48;
			write (fd, &result, 1);
		}
	}
}

static void	if_min_int(int n, int fd)
{
	if (n == -2147483647)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
}
