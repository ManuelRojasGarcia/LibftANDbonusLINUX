/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:57:15 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/15 16:20:25 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s2;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	j = ft_strlen(s + start);
	if (j < len)
		len = j;
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	return (s2);
}

	/*
int	main(void)
{
	char			s1[20] = "ManuyJuan";
	unsigned int	start;
	size_t			len;
	char			*resultado;

	start = 4;
	len = 20;
	resultado = ft_substr(s1, start, len);
	printf("%s", resultado);
	return (0);
}
*/
