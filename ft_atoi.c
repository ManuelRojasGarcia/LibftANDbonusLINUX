/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:44:57 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/12 15:21:40 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	dst;
	int	sign;

	dst = 0;
	sign = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dst = dst * 10 + (str[i] - '0');
		i++;
	}
	return (sign * dst);
}
/*
int main(void)
{
	char str[10] = "\e475";
	int	resultado;

	resultado = ft_atoi(str);
	printf("%i\n", resultado);
	printf("%i\n", atoi(str));
	return (0);
}
*/
