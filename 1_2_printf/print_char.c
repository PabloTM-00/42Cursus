#include "ft_printf.h"

size_t	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}
