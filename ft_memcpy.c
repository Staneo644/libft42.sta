/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:24:26 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 20:26:51 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*newls;
	const char	*sc;

	sc = src;
	newls = (char *) dst;
	i = 0;
	if (!sc && !newls)
		return (NULL);
	while (i < n)
	{
		newls[i] = sc[i];
		i++;
	}
	return (newls);
}
