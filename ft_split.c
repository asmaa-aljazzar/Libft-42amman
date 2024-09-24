#include "libft.h"

static int	safe_malloc(char **arr, int position, size_t size)
{
	int		i;

	i = 0;
	arr[position] = malloc(size);
	if (NULL == arr[position])
	{
		while (i < position)
			free(arr[i++]);
		free(arr);
		return (1);
	}
	return (0);
}

// return 0 if all mallocs went fine, otherwise 1
static int	fill(char **arr, char const *str, char delimeter)
{
	size_t	word_len;
	int		i;

	i = 0;
	while (*str)
	{
		word_len = 0;
		while (*str == delimeter && *str)
			++str;
		while (*str != delimeter && *str)
		{
			++word_len;
			++str;
		}
		if (word_len)
		{
			 if (safe_malloc(arr, i, word_len + 1))
				   return (1);
		  ft_strlcpy(arr[i], str - word_len, word_len + 1);
		}
		++i;
	}
	return (0);
}

static size_t	count_words(char const *str, char delimeter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*str)
	{
		inside_token = 0;
		while (*str == delimeter && *str)
			++str;
		while (*str != delimeter && *str)
		{
			if (!inside_token)
			{
				++tokens;
				inside_token = 42;
			}
			++str;
		}
	}
	return (tokens);
}

char	**ft_split(char const *str, char c)
{
	size_t	tokens;
	char	**arr;

	if (NULL == str)
		return (NULL);
	tokens = 0;
	tokens = count_words(str, c);
	arr = malloc((tokens + 1) * sizeof(char *));
	if (NULL == arr)
		return (NULL);
	arr[tokens] = NULL;
	if (fill(arr, str, c))
		return (NULL);
	return (arr);
}