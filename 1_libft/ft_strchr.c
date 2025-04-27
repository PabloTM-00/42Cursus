/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:40:02 by pabtorre          #+#    #+#             */
/*   Updated: 2025/04/27 18:47:14 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strchr(const void *str, int c, size_t len)
{
	unsigned char *s1;
	size_t i;

	i = 0;
	s1 = (unsigned char *)str;

	while (i < len)
	{
		if (s1[i] == (unsigned char)c)
		{
			return (s1 + i);
		}
		i++;
	}
	return (NULL);
}
