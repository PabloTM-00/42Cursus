/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:28:30 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/01 20:04:56 by pabtorre         ###   ########.fr       */
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

	printf("Cadena original: %s\n", str);

	ft_memset(str, 'x', 5);

	printf("Cadena después de ft_memset: %s\n", str);

	char str2[50] = "Hola, mundo!";
	memset(str2, 'x', 5);
	printf("Cadena después de memset: %s\n", str2);

	return 0;
}
