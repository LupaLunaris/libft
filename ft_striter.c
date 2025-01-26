/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:47:33 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/09 17:57:13 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_striter - Applique la fonction f à chaque caractère de la chaîne s
#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	if (s && f)
	{	
		while (*s)
		{
			f(s);
			s++;
		}
	}
}
