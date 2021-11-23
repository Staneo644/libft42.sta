/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:30:40 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 20:12:03 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t lenght)
{
	size_t		i;

	if (!lenght)
		return (0);
	i = 0;
	while (first[i] == second[i] && i < (lenght - 1)
		&& first[i] != 0 && second[i] != 0)
	{
		i ++;
	}
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
