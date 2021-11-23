/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:23:58 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/12 15:47:39 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	char	*rend;

	i = 0;
	while (source[i] != 0)
	{
		i++;
	}
	rend = malloc(sizeof (char) * i + 1);
	if (!rend)
		return (NULL);
	i = 0;
	while (source[i] != 0)
	{
		rend[i] = source[i];
		i++;
	}
	rend[i] = 0;
	return (rend);
}
