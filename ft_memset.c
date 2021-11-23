/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:40:49 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:05:30 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *pointer, int value, size_t count )
{
	char	*dst;	

	dst = pointer;
	while (count)
	{
		*dst = (unsigned char)value;
		dst++;
		count --;
	}
	return (pointer);
}
