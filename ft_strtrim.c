/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:04:53 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/15 16:30:23 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strrchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - 1;
	while (len > i && ft_strrchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, i, len - i + 1));
}
/*
int	main(void)
{
	char	*s1 = "abcdMANUdcba";
	char	*set = "abcd";
	char *str = ft_strtrim(s1, set);
	printf("%s", str);

	return (0);
}
*/
