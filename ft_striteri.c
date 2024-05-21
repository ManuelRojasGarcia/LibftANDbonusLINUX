/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:30:44 by marojas-          #+#    #+#             */
/*   Updated: 2024/02/20 18:32:13 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    manu(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
      		s[i] -= 32;
	       
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
int main(void)
{
	char	c[] = "hola";


	ft_striteri(c, manu);
	printf("%s\n", c);
	
	return (0);
}
*/
