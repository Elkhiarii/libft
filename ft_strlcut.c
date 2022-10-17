/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:28:43 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/17 15:08:57 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char *dst,const char *src,size_t n)
{
    size_t dstlen;
    size_t srclen;
    size_t i;
    size_t size;
    char *s;

    dstlen = ft_strlen(dst);
    dstlen = ft_strlen(src);
    i = 0;
    s = (char *)src ;
    if (n > dstlen)
        size = srclen + dstlen;
    else
        size = srclen + n;
    while (src[i] && (dstlen + 1) < n)
    {
        dst[dstlen] = s[i];
        dstlen++;
        i++;
    }
    dst[dstlen] = '\0';
    return size;
}
