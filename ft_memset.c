/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:08:03 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/12 18:40:01 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;

    if(!b)
        return 0;
    while(len > i)
    {
        *(unsigned char *)(b + i) = (unsigned char)c;
        if(i > ft_strlen(b))
            return b;
        i++;
    }
    return b; 
}
int main()
{
    char str[50] = "hello";
    ft_memset(str,'c',7);
    puts(str);
}
