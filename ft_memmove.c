/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:14:51 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/17 11:14:55 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    int i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;

    if(d > s)
    {
        while(len-- != 0)
            *(d +len) = *(s + len);
    }
    else
    {
        while(i < len)
        {
            *(d +i) = *(s + i);
            i++;
        }
    }
    return dst;
}

// int main(void)
// {

// 	char str2[] = "mahmudul hasan";
// 	char *ret;

// 	ret = ft_memmove(str2, str2 + 5, 10);  fix overlap
// 	printf("%s", ret); => dul hasan
// 	return (0);
// }

