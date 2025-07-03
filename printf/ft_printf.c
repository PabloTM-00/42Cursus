/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptorr <ptorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:23:31 by ptorr             #+#    #+#             */
/*   Updated: 2025/07/03 10:31:41 by ptorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			write(1, "?", 1);
			printed++;
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			printed++;
			i++;
		}
	}
	return printed;
}
