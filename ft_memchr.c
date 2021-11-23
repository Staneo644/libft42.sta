/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:24:40 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 21:17:52 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryblock, int searchedchar, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (*(char *)memoryblock == (char)searchedchar)
		{
			return ((void *)memoryblock);
		}
		memoryblock++;
		i++;
	}
	return (NULL);
}
