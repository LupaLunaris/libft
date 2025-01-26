/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:07:45 by jpaulis           #+#    #+#             */
/*   Updated: 2024/10/10 10:21:22 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//ft_strmap - Applique la fonction f à chaque caractère de la chaîne s pour créer une nouvelle chaîne résultant de cette transformation
//Retourne une copie "fraîche" de la chaîne modifiée
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	size_t	i;
	
	i = 0;
	if (!s || !f)
		return NULL;
	new_str = (char *)malloc(ft_strlen(s) + 1;
	if (!new_str)
		return NULL;
	while (s[i])
	{
    	new_str[i] = f(s[i]);
    	i++;
	}
	new_str[i] = '\0';
	return new_str;	
}

/*
#include <stdio.h>
#include <stdlib.h>

char ft_toupper(char c);

int main()
{
    char *str = "bonjour";
    char *new_str = ft_strmap(str, ft_toupper);

    if (new_str)
    {
        printf("Original : %s\n", str);
        printf("Modifié : %s\n", new_str);
        free(new_str);
    }

    return 0;
}
*/
