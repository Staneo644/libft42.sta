/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:24:06 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:06:46 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const	char *string, int searchedChar)
{
	char			*p;

	p = NULL;
	while (*string != (char)searchedChar)
	{
		if (*string == 0 && (char)searchedChar != 0)
		{
			return (0);
		}
		string ++;
	}
	p = (char *)string;
	return (p);
}
