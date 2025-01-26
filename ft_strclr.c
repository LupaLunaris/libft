/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:35:14 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:48:26 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strclr - Assigne la valeur '\0' à tous les caractères d'une chaîne passée en paramètre
#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}
