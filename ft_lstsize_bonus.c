/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:10:34 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/22 12:01:38 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list 	*node1;
	t_list	*node2;
	int		i;
	int		j;
	int		result;

	i = 4;
	j = 5;
	result = 0;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	node1->next = node2;
	node2->next = NULL;
	result = ft_lstsize(node1);
	printf("%i", result);
	return (0);
}
*/
