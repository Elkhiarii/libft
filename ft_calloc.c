/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:31:34 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 17:07:49 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	i = malloc(count * size);
	ft_bzero(i, count * size);
	return (i);
}
// int main(){
//     int i, n;
//    int *a;
//    printf("Number of elements to be entered:");
//    scanf("%d",&n);
//    a = (int*)ft_calloc(n, sizeof(int));
//    printf("Enter %d numbers:\n",n);
//    for( i=0 ; i < n ; i++ ) {
//       scanf("%d",&a[i]);
//    }
//    printf("The numbers entered are: ");
//    for( i=0 ; i < n ; i++ ) {
//       printf("%d ",a[i]);
//    }
//    free( a );
// }
// => 
// Number of elements to be entered:3
// Enter 3 numbers:
// 54
// 15
// 2
// The numbers entered are: 54 15 2 % 