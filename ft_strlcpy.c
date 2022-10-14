/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:06:04 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/14 10:06:06 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t  ft_strlcpy(char *dst,char *src, size_t dstsize)
{
    size_t srcsize;
    size_t i;

    srcsize = ft_strlen(src);
    i = 0;
    while (src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (srcsize);
}
/*
int main()
{
    char *src ;
    char dst[15];

    src = "Hello world";
    printf("%zu" ,ft_strlcpy(dst,src,3));
}
*/