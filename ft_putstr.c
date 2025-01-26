/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:36:55 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/13 14:40:12 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//Affiche la chaine s à la sortie standard
#include "libft.h"

void	ft_putstr(char const *s)
{
	while (*s)
		write(1, *s++, 1);
}
