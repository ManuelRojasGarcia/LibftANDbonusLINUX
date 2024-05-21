/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:28:14 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/20 14:07:57 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list 	*node2;
	int	content1;
	int	content2;

	content1 = 3;
	content2 = 5;

	node1  = NULL;
	node2 = NULL;
	node1 = malloc(sizeof(t_list));
		if (!node1)
			return (0);
	node1->content = &content1;
	node2 = malloc(sizeof(t_list));
		if (!node2)
			return (0);
	node2->content = &content2;
	ft_lstadd_front(&node1, node2);
	t_list *current = node2;
	while (current != NULL) 
	{
		printf("%d\n", *(int *)(current->content));
        current = current->next;
	}	
	return (0);
}
*/
