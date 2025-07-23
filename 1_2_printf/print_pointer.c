#include "ft_printf.h"

size_t	print_pointer(void *ptr)
{
	size_t	counter;

	counter = 0;
	if (!ptr)
		counter += print_str("(nil)");
	else
	{
		counter += print_str("0x");
		counter += print_hex((unsigned long)ptr, 16, 'p');
	}
	return (counter);
}
