#include "libft.h"

/*
* removing the characters specified in the set 
* string from the start AND the end of the string s1,
* without removing the characters from the set that are in the middle of s1.
*/
static char	*result(const char *s1, unsigned int start, unsigned int len);
static int	istotrim(const char *set, char c);

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	end;
	unsigned int	start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	end--;
	while (istotrim(set, s1[start]))
	{
		start++;
	}
	while (istotrim(set, s1[end]))
	{
		end--;
	}
	return (result(s1, start, end - start + 1));
}

static int	istotrim(const char *set, char c)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*result(const char *s1, unsigned int start, unsigned int len)
{
	unsigned int	i;
	char	*result;

	i = 0;
	if (len <= 0 || start > ft_strlen(s1))
		return (strdup(""));
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	return (result);
}
