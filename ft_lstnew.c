/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:01:02 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/28 16:09:45 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;	

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}






// int main()
// {
// 	t_list *s;
// 	s = ft_lstnew("HELLO");
// 	ft_lstadd_back(&s,ft_lstnew(" World"));
// 	t_list *new;
// 	new = s;
// 	while (new)
// 	{
// 	printf("%s",new->content);
// 	new = new->next;
// 	}
// 	printf("\n%d",ft_lstsize(s));
	
// }