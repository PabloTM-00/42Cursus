
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

/*
int	main(void) {
	const char *string = "Hello, World!";
	char c = ',';
	char *result = ft_strchr(string, c);

	printf("%s", result);
	return (0);
}
*/
