/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:23:01 by marojas-          #+#    #+#             */
/*   Updated: 2024/05/21 16:04:18 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*resultado;

	if (SIZE_MAX / count < size)
	{
		return (NULL);
	}
	resultado = malloc(count * size);
	if (resultado == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(resultado, count * size);
		return (resultado);
	}
}

/*
int main(void)
{
    void *ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
    if (ptr == NULL)
    {
        printf("Allocation failed as expected.\n");
    }
    else
    {
        printf("Allocation succeeded unexpectedly.\n");
        free(ptr);
    }

    return 0;
}
*/
