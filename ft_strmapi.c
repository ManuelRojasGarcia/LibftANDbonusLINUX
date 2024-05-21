/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:33:03 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/20 18:28:16 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
int mayus (int c)
{
        if ((c >= 'A' && c <= 'Z'))
                c += 32;
        return (c);
}
char	manu(unsigned int i, char c)
{
	i = 0;
	c = mayus(c + i);

	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
/*
int main(void)
{
	char	*resultado;
	char	*s;
		
	s = "MANU";
	resultado = ft_strmapi(s, manu);
	printf("%s", resultado);
	return (0);
}
*/
