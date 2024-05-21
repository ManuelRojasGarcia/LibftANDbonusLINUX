/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:49:36 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/25 12:28:52 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_free(void *node)
{
	free (node);
	return ;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	aux = *lst;
	while (aux != NULL)
	{
		next = aux->next;
		del(aux->content);
		free(aux);
		aux = next;
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		i;
	int		j;
	
	i = 4;
	i = 5;
	node1 = malloc(sizeof(_list));
	node2 = malloc(sizeof(t_list));
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	node1->next = node2;
	node2->next = NULL;
	ft_lstclear(&node1, ft_free);
	return (0);
}
*/
