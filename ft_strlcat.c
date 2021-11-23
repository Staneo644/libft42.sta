/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:30:57 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/15 10:39:41 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			n;
	size_t			k;

	k = ft_strlen(dest);
	n = ft_strlen((char *)src);
	j = 0;
	i = 0;
	if (size == 0 || k > size)
		return (size + n);
	j = k;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = 0;
	return (n + k);
}
