#include "libft.h"

// Put a string in a file description
void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	if (s)
	{
		len = ft_strlen(s);
		write (fd, s, len);
	}
}
