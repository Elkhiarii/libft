/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:25:21 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/31 13:52:48 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (lst && del)
	{
		new = *lst;
		while (*lst)
		{
			new = new->next;
			del((*lst)->content);
			free(*lst);
			*lst = new;
		}
		*lst = NULL;
	}
}
