#include "libft.h"
/*
* Concatenates the source string (src)
* to the destination string (dst)
* ensuring that the final string fits
* within the buffer size specified by dstsize.
* It returns the length of the concatenated strings: 
* the original length of dst plus the length of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= dstsize)
		dst_size = dstsize;
	if (dst_size == dstsize)
		return (dstsize + src_size);
	if (src_size < dstsize - dst_size)
	{
		ft_memcpy(dst, src, src_size);
	}
	else
	{
		ft_memcpy(dst, src, dstsize - dst_size - 1);
	}
	return (dst_size + src_size);
}
