
#include "libft.h"

int	ft_toupper(int argument)
{
	if (argument >= 'a' && argument <= 'z')
	{
		argument = argument - 32;
	}
	return (argument);
}
