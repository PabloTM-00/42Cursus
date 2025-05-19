
#include "libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
	{
		argument = argument + 32;
	}
	return (argument);
}
