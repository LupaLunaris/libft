/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:44:31 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/13 14:56:05 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//Affiche l'entier n sur la sortie standard
#include "libft.h"

void	ft_putnbr(int n)
{
	char *num;

	num = ft_itoa(n);
	ft_putstr(num);
	free(num); //???
}


{
	long	num;

	num = n;
	if (num < 0)	

}
