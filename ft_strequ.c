/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:02:10 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/10 11:09:52 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strequ - Compare lexicographiquement s1 et s2.
//Retourne 1 si les chaines sont égales, sinon 0.

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return 1;
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *s1 = "Hello";
	char *s2 = "Hello";

	printf("%d\n", ft_strequ(s1, s2));
	return 0;
}
*/
