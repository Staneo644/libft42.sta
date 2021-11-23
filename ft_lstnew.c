/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:58:12 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 12:12:13 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rend;

	rend = malloc(sizeof(t_list) * 1);
	if (!rend)
		return (NULL);
	rend[0].content = content;
	rend[0].next = NULL;
	return (rend);
}
