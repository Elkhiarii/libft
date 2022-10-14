/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:03:46 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/11 19:03:48 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    // (void)s1;
    // (void)s2;
    size_t i;
    i = 0;

    while(i != len)
    {
        if((ft_strncmp((char *)&s1[i],s2,ft_strlen(s2)) == 0))
            return (char *)&s1[i];
        i++;
    }
    return "0" ;
}

// int main(){
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring,5);
//     puts(ptr); => Bar Baz
// }
