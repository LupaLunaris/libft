/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:24:03 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:30:44 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strnew - Alloue de la mémoire et retourne une chaîne de caractères "neuve" qui se termine par '\0'.
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(size + 1);
	if (!str)
		return NULL;
	ft_bzero(str, size + 1);
	return str;
}
