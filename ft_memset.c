/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:23:29 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/21 17:53:29 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = b;
	while (i < len)
	{
		a[i] = (unsigned) c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	size_t	len;
	int		c;
	char	b[10];
	size_t	i;

	len = 5;
	c = 'A';
	i = 0;
	ft_memset(b, c, len);
//	memset(b, c, len);
	while (i < len)
	{
		printf("%c", (b[i]));
//		printf("%c", b[i]);
		i++;
	}
	return (0);
}
*/
