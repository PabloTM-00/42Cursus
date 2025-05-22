/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:15:36 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:32:17 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char argument)
{
	return (argument != '\0' && (argument == 32 || (argument >= 9
				&& argument <= 13)));
}

int	ft_atoi(const char *argument)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (argument[i] != '\0' && is_space(argument[i]))
		i++;
	if (argument[i] == '-' || argument[i] == '+')
	{
		if (argument[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (argument[i] != '\0' && ft_isdigit(argument[i]))
	{
		result = result * 10 + (argument[i] - '0');
		i++;
	}
	return (result * sign);
}
