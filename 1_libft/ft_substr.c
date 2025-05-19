
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_copy;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s_copy = (char *)malloc(len + 1);
	if (!s_copy)
		return (NULL);
	while (i < len)
	{
		s_copy[i] = s[start + i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

/*
int	main(void) {
	const char* string = "Hello, world!";
	int start = 7;
	int lenght = 5;

	char* result = ft_substr(string, start, lenght);
	if (result != NULL) {
		printf("Substring: %s", result);
		free(result)
	} else {
		printf("Error extract result.\n");
	}

	return (0);
}
*/