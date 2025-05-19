/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:35:13 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:35:32 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)b;
	while (len > i)
	{
		s1[i] = 0;
		i++;
	}
	return (b);
}
