/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulis <jpaulis@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/10/08 01:36:36 by jpaulis           #+#    #+#            */
/*   Updated: 2024/10/09 16:08:12 by jpaulis          ###   ########.be       */
/*                                                                            */
/* ************************************************************************** */

//memccpy - Copie les octets de src vers dest jusqu'à ce que le caractère c soit rencontré, ou que n octets aient été copiés
//Retourne un pointeur vers l'octet suivant la copie de c dans dest, ou NULL si c n'est pas trouvé dans les n premiers octets
#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    int i;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if (!src || !dest)
        return NULL;
while (n > 0)
    {
        if ((char)c == s[i])
            return (void *)(d + i + 1);
        d[i] = s[i];
        i++;
        n--;
    }
    return NULL;
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    char *result;

    result = ft_memccpy(dest, src, ',', sizeof(src));

    printf("Dest après memccpy: %s\n", dest);

    return 0;
}

