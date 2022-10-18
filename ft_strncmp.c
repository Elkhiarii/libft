/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:58 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:30:35 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && i != n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//  int main(){
//   char *largestring = "ABC";
//  const char *smallstring = "ABc";
// 	printf(" ft_strncmp : %d|",ft_strncmp(largestring, smallstring,2)); => 0 
// printf(" ft_strncmp : %d|",ft_strncmp(largestring, smallstring,3));  => -32 	
// }