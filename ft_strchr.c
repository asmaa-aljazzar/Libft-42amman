#include "libft.h"
/*
* Search for specific char ( first appearing )
* in a string and return pointer to it
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;
	unsigned char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
