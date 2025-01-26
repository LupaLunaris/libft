/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/10/08 01:36:36 by jpaulis           #+#    #+#            */
/*   Updated: 2024/10/09 16:13:31 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//strcat - Concatène la chaîne src à la fin de la chaîne dst
//Retourne un pointeur vers dst
#include "lift.h"

char    *ft_strcat(char *src, char *dst)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char dst[50] = "Hello";
    char src[] = ", world!";

    ft_strcat(src, dst);

    printf("Dst: %s\n", dst);

    return 0;
}
*/
