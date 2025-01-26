/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:40:44 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/13 14:44:15 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//Affiche la chaine s sur la sortie standard suivi d'un '\n'
#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write (1, "\n", 1);
}
