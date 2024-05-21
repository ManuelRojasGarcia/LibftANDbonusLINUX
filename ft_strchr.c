/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:18:08 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/01 18:16:42 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*b;
	int		i;

	i = 0;
	b = (char *) s;
	if ((char) c == '\0')
		return (b + ft_strlen(b));
	while (b[i] != '\0')
	{
		if (b[i] == (char )c)
			return (b + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[10] = "Hola";
	int c;
	char *resultado;

	c = 'l';
	resultado = ft_strchr(s, c);
	printf("%s\n", resultado);
	printf("%s", strchr(s, c)); 
	return (0);
}
*/
