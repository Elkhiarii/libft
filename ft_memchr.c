/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:13:49 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/17 10:13:50 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    str = (unsigned char *)s;
    unsigned char ft_c;
    ft_c = c;
    int i ;
    i = 0;
    while(i < n)
    {
        if(*(str + i) == ft_c)
            return ((unsigned char *)&str[i]);
    }
    return 0;
}
