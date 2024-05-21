/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:47:50 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/01 18:16:30 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[10] = "Hola, Juan";
	int	c;
	size_t len;
	char	*resultado;

	c = 'l';
	len = 10;
	resultado = ft_memchr(s1, c, len);
	printf("%s\n", resultado);
	printf("%s", memchr(s1, c, len));
	return (0);
}
*/
