/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:24:35 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 10:34:12 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(char *)pointer1 != *(char *)pointer2)
		{
			return (*(unsigned char *)pointer1 - *(unsigned char *)pointer2);
		}
		pointer1++;
		pointer2++;
		i++;
	}
	return (0);
}
