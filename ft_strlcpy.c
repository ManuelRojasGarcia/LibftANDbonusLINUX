/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:41:04 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/23 18:04:45 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	d[10] = "hola";
	char	s[10] = "adios";
	size_t	len;
	size_t	resultado;

	len = 2;
	resultado = ft_strlcpy(d, s, len);
	printf("%zu", resultado);
	return (0);
}
*/
