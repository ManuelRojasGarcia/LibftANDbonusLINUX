/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:28:06 by marojas-          #+#    #+#             */
/*   Updated: 2024/01/30 19:44:08 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
int main(void)
{
	char s1[7] = "testss";
	char s2[5] = "test";
	size_t	i;
	int	resultado;

	i = 7;
	resultado = ft_strncmp(s1, s2, i);
	printf("%i", resultado);
	printf("%i", strncmp(s1, s2, i));
	return (0);
}
*/
