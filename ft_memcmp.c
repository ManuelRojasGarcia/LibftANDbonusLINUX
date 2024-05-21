/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:08:27 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/01 16:46:56 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[10] = "Hola, juan";
	char	s2[10] = "Juan";
	size_t	len;
	int	resultado;

	len = 10;
	resultado = ft_memcmp(s1, s2, len);
	printf("%i\n", resultado);
	printf("%i\n", memcmp(s1, s2, len));
	return (0);
}
*/
