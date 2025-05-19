/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:17:40 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:19:09 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destp;
	unsigned char	*srcp;

	i = 0;
	if (!src && !dest)
		return (NULL);
	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
/*
int	main(void) {

	char source[] = "Hello, World!";

	char destination[20];

	ft_memcpy(destination, source, 10);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
}
*/