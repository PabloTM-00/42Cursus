/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorr <ptorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 23:52:24 by ptorr             #+#    #+#             */
/*   Updated: 2025/05/21 00:22:39 by ptorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*itoa_number;
	long	num;

	size = get_int_len(n);
	itoa_number = (char *)malloc(sizeof(char) * (size + 1));
	if (!itoa_number)
		return (NULL);
	itoa_number[size] = '\0';
	num = (long)n;
	if (num == 0)
		itoa_number[0] = '0';
	if (num < 0)
	{
		itoa_number[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		itoa_number[--size] = (num % 10) + '0';
		num = num / 10;
	}
	return (itoa_number);
}
