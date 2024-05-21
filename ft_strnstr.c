/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:47:18 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/01 18:44:44 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j < len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char hay[35] = "lorem ipsum dolor sit amet";
	const char needle[10] = "dolor";
	size_t	len;
	char	*resultado;

	len = 15;
	resultado = ft_strnstr(hay, needle, len);	
	printf("%s\n", resultado);
	printf("%s", strnstr(hay, needle, len));
	return (0);
}
*/
