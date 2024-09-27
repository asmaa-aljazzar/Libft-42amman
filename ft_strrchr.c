#include "libft.h"
/*
* Search for specific char ( last appearing )in a string and return pointer to it
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	c2;

	slen = ft_strlen(s);
	c2 = (char) c;
	while (slen > 0)
	{
		if (s[slen] == c2)
			return ((char *)&s[slen]);
		slen--;
	}
	if (s[0] == c2)
		return ((char *)&s[0]);
	return (NULL);
}
