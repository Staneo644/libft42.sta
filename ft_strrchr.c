/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:30:21 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:08:31 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const	char *string, int searchedChar)
{
	char			*p;

	p = NULL;
	while (*string != 0)
	{
		if (*string == (char)searchedChar)
		{
			p = (char *)string;
		}
		string ++;
	}
	if ((char)searchedChar == 0)
	{
		p = (char *)string;
	}
	return (p);
}
