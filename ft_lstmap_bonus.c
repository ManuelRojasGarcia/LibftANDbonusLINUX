/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:08:40 by marojas-          #+#    #+#             */
/*   Updated: 2024/03/29 13:22:36 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
/*
void *ft_uppercase(void *ptr)
{
	char	*s;
	int		i;
	
	s = (char *)ptr;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;

	}
	return (s);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_list;
	t_list	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			(*del)(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int	main(void)
{
	t_list	*node1;
	char	c[5] = "manu";

	node1 = malloc(sizeof(t_list));
	if (!node1)
		return (0);
	node1->content = (void *)c;
	node1->content = ft_uppercase(node1->content);
	printf("%s", (char *)node1->content);
	return (0);
}
*/
