/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:25:57 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/30 19:44:32 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*b;

	b = (char *) s;
	len = ft_strlen(b);
	if ((char) c == '\0')
		return (b + ft_strlen(b));
	while (len > 0)
	{
		len--;
		if (b[len] == (char) c)
			return (b + len);
	}
	return (0);
}
/*
int	main(void)
{
	char s[10] = "Pacalmente";
	int		c;
	char	*resultado;

	c = 'a';
	resultado = ft_strrchr(s, c);
	printf("%s\n", resultado);
	printf("%d", strrchr(s, c) == s);
	return (0);
}
*/
