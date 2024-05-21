/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:24:20 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/20 18:26:53 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	ft_free(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (words);
}

static char	**ft_splitwords(const char *s, char c, int words)
{
	int		start;
	int		i;
	int		len;
	char	**matrix;
	int		j;

	i = 0;
	j = 0;
	matrix = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!matrix)
		return (NULL);
	while (words--)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		len = i - start;
		i++;
		matrix[j] = ft_substr(s, start, len);
		if (!matrix[j++])
			return (ft_free(matrix), NULL);
	}
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**matrix;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	if (words == 0)
	{
		matrix = (char **)ft_calloc(words + 1, sizeof(char *));
		if (!matrix)
			return (NULL);
		matrix[0] = NULL;
		return (matrix);
	}
	matrix = ft_splitwords(s, c, words);
	if (!matrix)
		return (NULL);
	return (matrix);
}
/*
int	main(void)
{
	char const	*s;
	char		c;
	char			**resultado;
	int	i;

	i = 0;
	s = "";
	c = 'a';
	resultado = ft_split(s, c);
	while (resultado[i] != NULL)
	{
		printf("%s\n", resultado[i]);
		i++;
	}
	return (0);
}
*/
