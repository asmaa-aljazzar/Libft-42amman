#include "libft.h"
/*
* Work similar as strchr but take a void pointer as a parameter 
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;
	unsigned int	i;

	i = 0;
	c2 = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
