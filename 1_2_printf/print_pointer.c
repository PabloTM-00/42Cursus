/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:44:10 by pabtorre          #+#    #+#             */
/*   Updated: 2025/08/05 18:44:18 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_pointer(void *ptr)
{
	size_t	counter;

	counter = 0;
	if (!ptr)
		counter += print_str("(nil)");
	else
	{
		counter += print_str("0x");
		counter += print_hex((unsigned long)ptr, 16, 'p');
	}
	return (counter);
}
