/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:00:28 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/25 18:07:46 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		c += 32;
	return (c);
}
/*
int	main(void)
{
	int	c;
	int	resultado;

	c = 'B';
	resultado = ft_tolower(c);
	printf("%c", resultado);
	return (0);
}
*/
