#include "libft.h"

/*
* to allocate a specified amount of memory and then initialize it to zero
*/
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	unsigned int	i;
	unsigned int	total;

	total = count * size;
	i = 0;
	temp = malloc(total);
	if (count == 0 || size == 0)
		return (NULL);
	if (!temp)
		return (NULL);
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
