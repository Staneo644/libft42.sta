/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:20:58 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 16:58:10 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*point;

	if (!lst)
		return ;
	while (lst[0])
	{
		point = lst[0];
		lst[0] = lst[0][0].next;
		ft_lstdelone(point, del);
		point = NULL;
	}
}
