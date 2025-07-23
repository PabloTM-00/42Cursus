#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	print_hex(unsigned long int n, unsigned long base, char specifier);
size_t	print_str(char *str);
size_t	print_char(int c);
int		print_format(char specifier, va_list ap);
int		ft_printf(const char *format, ...);
size_t	print_pointer(void *ptr);
size_t	print_digit(int n);

#endif