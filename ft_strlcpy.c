#include "libft.h"
/*
* Copy src to dst to until reach specific size for dst 
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize > 0)
	{
		if (dstsize > srcsize + 1)
		{
			ft_memcpy(dst, src, srcsize +1);
		}
		else
		{
			ft_memcpy(dst, src, dstsize - 1);
			dst[dstsize - 1] = '\0';
		}
	}
	return (srcsize);
}
