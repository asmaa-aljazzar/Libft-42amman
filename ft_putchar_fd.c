#include "libft.h"

// put a character in the file description
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
