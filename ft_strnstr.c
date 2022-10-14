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

    while(i <= len)
    {
        printf("|i : %zu ft_camp : %d|",i,(ft_strncmp(&s1[i],s2,ft_strlen(s2))));
        // if()
        //     return (char *)&s1[i];
        i++;
    }
    return "it's NOT OK" ;
}










int main(){
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring,5);
    puts(ptr);
}
// char *ft_strnstr(const char *s1, const char *s2, size_t len)
// {
//     size_t i;

//     i = 0;
//     char nb;

//     while (i < len)
//     {
//         nb = ft_strncmp((char *)&s1[i],s2,ft_strlen(s2));
//         printf("%zu | ", i);
//         if(nb == '0')
//             return (char *)&s1[i];
//         i++;
//     }
//     return NULL;
// }