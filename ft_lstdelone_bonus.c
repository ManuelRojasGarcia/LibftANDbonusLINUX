/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:14:41 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/24 18:24:19 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
void	ft_free(void *node)
{
	free(node);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	else
		del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		i;
	int		j;

	i = 4;
	j = 5;
	node1 = malloc(sizeof(t_list));
	if (!node1)
		return (0);
	node2 = malloc(sizeof(t_list));
	if (!node2)
		return (0);
	node1->content = (void *)&i;
	node2->content = (void *)&j;
	ft_lstdelone(node1, ft_free);
	return (0);
}
*/
