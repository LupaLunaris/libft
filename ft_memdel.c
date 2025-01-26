/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:18:01 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:23:49 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_memdel - Libère une zone mémoire et met le pointeur à NULL
#include "libft.h"

void	ft_memdel(void **ap);
{
	free(*ap);
	*ap = NULL;  // Met le pointeur à NULL pour éviter toute utilisation ultérieure
}

