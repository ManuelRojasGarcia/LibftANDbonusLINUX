/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:05:45 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/22 14:00:56 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		i;
	int		j;
	t_list	*result;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node2->next = node1;
	node1->next = NULL;
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	result = ft_lstlast(node2);
	printf("%p", result);
	return(0);
}
*/
