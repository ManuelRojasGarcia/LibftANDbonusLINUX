/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:25:30 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/22 15:46:35 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (dst == src || n == 0)
	{
		return (dst);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	size_t	i;
	size_t	n;
	char 	d[50] = "Hola Mundo";
	char	s[50] = "haciendo libft";

	i = 0;
	n = 30;
	ft_memcpy(d, s, n);
	while (i < n)
	{
		printf("%c", d[i]);
		i++;
	}
	return (0);
}
*/
