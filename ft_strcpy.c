/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/10/08 01:36:36 by jpaulis           #+#    #+#            */
/*   Updated: 2024/10/09 15:48:18 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//strcpy - Copie la chaîne de caractères src dans dst, y compris le caractère nul final '\0'

#include "libft.h"

char    *ft_strcpy(char *dst, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dst[50];

    ft_strcpy(dst, src);

    printf("Dst: %s\n", dst);

    return 0;
}
*/
