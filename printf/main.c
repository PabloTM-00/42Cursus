#include "ft_printf.h"

int main(void)
{
	int count;

	count = ft_printf("Hola %s, tienes %d años.\n");
	ft_printf("Se imprimieron %d caracteres.\n", count);

	return 0;
}
