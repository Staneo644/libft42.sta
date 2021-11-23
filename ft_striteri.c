/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:51:03 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 14:11:06 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		length;

	if (!s)
		return ;
	length = 0;
	while (s[length])
	{
		length++;
	}
	i = 0;
	while (i < length)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
