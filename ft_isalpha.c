/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:47 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/21 16:40:54 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c;
	int		resultado;

	c = 'A';
	resultado = ft_isalpha(c);
//	printf("%i", resultado);
	printf("%i", isalpha(c));
	return (0);
}
*/
