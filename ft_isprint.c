/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:19:15 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/21 16:45:35 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	i;
	int	resultado;

	i = 127;
	resultado = ft_isprint(i);
//	printf("%d", resultado);
	printf("%d", isprint(i));
	return (0);
}
*/
