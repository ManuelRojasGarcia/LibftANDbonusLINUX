/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:20:15 by marojas-          #+#    #+#             */
/*   Updated: 2024/06/06 14:22:17 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	char	*result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(n + 1);
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	str1[10] = "Manu";
	char	str2[20]	= "yJuan";
	char	*resultado;

	resultado = ft_strjoin(str1, str2);
	printf("%s", resultado);
	return (0);
}
*/
