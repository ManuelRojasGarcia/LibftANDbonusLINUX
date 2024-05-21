/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:14:04 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/24 17:45:58 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		node = *lst;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}
/*
int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list	*nodelast;
	int		i;
	int		j;
	int		k;
	
	i = 1;
	j = 2;
	k = 3;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	nodelast = malloc(sizeof(t_list));
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	nodelast->content = (void *)&k;
	ft_lstadd_back(&node1, nodelast);
	printf("%p", node1);
	return (0);
}
*/
