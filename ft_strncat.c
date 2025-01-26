/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/10/08 01:36:36 by jpaulis           #+#    #+#            */
/*   Updated: 2024/10/09 16:00:34 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//strncat - Concatène jusqu'à n caractères de la chaîne src à la fin de la chaîne dst.

#include "libft.h"

char    *ft_strncat(char *src, char *dst, int n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0' && j < n)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0'; 
    return (dst);
}

/*

#include <stdio.h>

int main(void)
{
    char dst[20] = "Hello";
    char src[] = ", world!";

    ft_strncat(src, dst, 5); 

    printf("Dst: %s\n", dst);

    return 0;
}
*/
