/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:10:15 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/10 11:16:28 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strnequ - Compare lexicographicalement s1 et s2 jusqu'a n caractères max ou '\0'.
//Retourne 1 si les deux chaines sont égales sinon 0.
#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return 1;
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *s1 = "Hello";
	char *s2 = "Hello World";
	size_t n = 5;

	printf("%d\n", ft_strnequ(s1, s2, n));
	return 0;
}
*/
