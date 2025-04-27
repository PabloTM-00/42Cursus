/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:28:30 by pabtorre          #+#    #+#             */
/*   Updated: 2025/04/27 18:51:44 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *s1;
	size_t i;

	i = 0;
	s1 = (unsigned char *)b;
	while (len > i)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int main()
{
	char str[50] = "Hola, mundo!";

	// Mostrar la cadena original
	printf("Cadena original: %s\n", str);

	// Usamos ft_memset para establecer los primeros 5 caracteres a 'x'
	ft_memset(str, 'x', 5);

	// Mostrar la cadena después de aplicar ft_memset
	printf("Cadena después de ft_memset: %s\n", str);

	// Usamos memset para hacer lo mismo (para comparar)
	char str2[50] = "Hola, mundo!";
	memset(str2, 'x', 5);
	printf("Cadena después de memset: %s\n", str2);

	return 0;
}
