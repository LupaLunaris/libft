/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:31:19 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:35:01 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strdel - Libère une chaîne de caractères et met le pointeur à NULL
#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
