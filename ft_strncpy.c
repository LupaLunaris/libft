/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/10/08 01:36:36 by jpaulis           #+#    #+#            */
/*   Updated: 2024/10/09 16:02:09 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//strncpy - Copie jusqu'à n caractères de la chaîne src vers dst

#include "libft.h"

char    *ft_strncpy(char *src, char *dst, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dst[i] = '\0';
        i++;
    }    
    return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];

    ft_strncpy(dst, src, 5);

    printf("Dst: %s\n", dst);

    return 0;
}
*/
