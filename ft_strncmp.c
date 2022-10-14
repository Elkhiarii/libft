/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:58 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/11 17:17:42 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int		ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i != n ) {
		i++;
	}
	return (s1[i] - s2[i]);
}
int main(){
     char *largestring = "Bar Baz";
    const char *smallstring = "Bar";
	printf(" ft_strncmp : %d|",ft_strncmp(largestring, smallstring,2));

}
