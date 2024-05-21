/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:05:14 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/25 17:42:05 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lens;
	size_t	lend;

	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize <= lend)
		return (lens + dstsize);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lend + lens);
}
/*
int	main(void)
{
    char    d[12] = "Manue";
    char    *s = "Juan";
	size_t	len;
	size_t	resultado;

	len = 8;
	resultado = ft_strlcat(d, s, len);
	printf("%zu\n", resultado);
//	printf("%zu", strlcat(d, s, len));
	return (0);
}
*/
