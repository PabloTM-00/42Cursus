/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabtorre <pabtorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:19:37 by pabtorre          #+#    #+#             */
/*   Updated: 2025/05/19 13:20:24 by pabtorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	int		s_len;

	sp = (char *)s;
	s_len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (sp + s_len);
	while (s_len >= 0)
	{
		if (sp[s_len] == (unsigned char)c)
			return (sp + s_len);
		s_len--;
	}
	return (NULL);
}
/*
int	main(void) {
	const char *cadena = "Hello my world";
	char c = 'o';
	char *resultado = ft_strrchr(cadena, c);
	printf("%s", resultado);
	return (0);
}
*/
