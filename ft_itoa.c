/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:31:47 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/20 18:27:47 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sum(int c)
{
	int	len;

	len = 0;
	while (c != 0)
	{
		c /= 10;
		len++;
	}
	return (len);
}

static	char	*ft_calc(int len, char *result, int num)
{
	while (len > 0)
	{
		result[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	int		num;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		num = n * -1;
	else
		num = n;
	len = ft_sum(n);
	if (n < 0)
		len = len + 1;
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	result = ft_calc(len, result, num);
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
int main(void)
{
	int	i;
	char	*resultado;

	i = 20;
	resultado = ft_itoa(i);
	printf("%s", resultado);
	return (0);
}
*/
