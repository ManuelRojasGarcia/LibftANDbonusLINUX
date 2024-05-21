/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:26:58 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/12 16:56:40 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size1;

	size1 = ft_strlen(s1) + 1;
	s2 = (char *)malloc(size1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, size1);
	if (!s1)
		return (NULL);
	return (s2);
}
/*
int	main(void)
{
	char s1[10] = "\0";
	char *resultado;

	resultado = ft_strdup(s1);
	printf("%s\n", resultado);
	printf("%s\n", strdup(s1));
	return (0);
}
*/
