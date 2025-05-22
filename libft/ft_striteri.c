/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:18:43 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:19:09 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	to_uppercase(unsigned int index, char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
	{
		*ch = *ch - 32;
	}
}

int	main(void)
{
	char	str[] = "hello, world!";

	printf("Result before: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Result after: %s\n", str);
	return (0);
}
*/