/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:17:32 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:19:09 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;

	i = 0;
	sp = (unsigned char *)s;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)&sp[i]);
		i++;
	}
	return (NULL);
}

/*
	int main() {
	const char *s = "Hello, world!";
	char c = 's';
	size_t n = 13;
	char *result = ft_memchr(s, c, n);
	printf("Subchain: %s\n", result);
	return (0);
}
*/