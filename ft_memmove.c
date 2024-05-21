/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:18:33 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/08 20:18:45 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	i = 0;
	while (dst == src)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
		return (dst);
	}
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return (dst);
}
/*
int	main(void)
{
	char	d[10] = "Hola";
	char	s[10] = "Adios";
	size_t	len;
	size_t	i;

	len = 3;
	i = 0;
	ft_memmove(d, s, len);
	while (i < len)
	{
		printf("%c", d[i]);
		i++;
	}
	return (0);
}
*/
