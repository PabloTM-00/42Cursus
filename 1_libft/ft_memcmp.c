/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:11:33 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/01 20:33:55 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t len)
{
    size_t				i;
	unsigned char		*a;
	unsigned char const	*b;

    a = (unsigned char *)s1;
	b = (const unsigned char *)s2;
	i = 0;

    while(len > i)
    {
        if (a[i] != b[i])
        {
            return (a[i] - b[i]);
        }    
        i++;
    }
    return (0);
}