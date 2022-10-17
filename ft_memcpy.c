/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:50:02 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/17 09:50:04 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(!dst && !src)
        return 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
// int main()
// {
//     const char src[50] = "www.elkhiari.ga";
//     char dst[50];
//     strcpy(dst,"hello!");
//     ft_memcpy(dst , src,3);
//     printf("|%s|",dst); => |wwwlo!|

// }