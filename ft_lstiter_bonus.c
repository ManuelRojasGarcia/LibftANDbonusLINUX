/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:36:01 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/25 15:04:51 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
/*
void	ft_plusone(void	*node)
{
	int	*i;
	
	i = (int *)node;
	(*i) += 1;
}	
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst->next != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		i;
	int		j;

	i = 5;
	j = 8;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	ft_lstiter(node1, ft_plusone);
	printf("%d", *(int *)(node1->content));
	return (0);
}
*/
