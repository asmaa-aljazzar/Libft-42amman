#include "libft.h"
/*
* The isprint() function returns a non-zero value 
* if the character passed as an int parameter is a printing character.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
