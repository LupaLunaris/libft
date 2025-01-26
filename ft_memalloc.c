/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:07:11 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:15:44 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_memalloc - Alloue et retourne une zone de mémoire initialisée à 0
//Retourne un pointeur vers la zone de mémoire allouée, ou NULL si l'allocation échoue

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return NULL;
	ft_bzero(mem, size);
	return mem;
}

/*

#include <stdio.h>

int main(void)
{
    size_t size = 10;
    void *mem = ft_memalloc(size);

    if (mem)
    {
        printf("Mémoire allouée et initialisée à 0.\n");
        free(mem);
    }
    else
    {
        printf("L'allocation de mémoire a échoué.\n");
    }

    return 0;
}
*/
