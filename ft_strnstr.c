/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:30:29 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/12 13:41:59 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	char			*p;

	if (s2[0] == 0)
		return ((char *)s1);
	p = NULL;
	i = 0;
	while (s1[0] && i < n)
	{
		j = 0;
		while (s1[j] == s2[j] && (i + j) < n)
		{
			j ++;
			if (s2[j] == 0)
			{
				p = (char *)s1;
				return (p);
			}
		}
		i ++;
		s1 ++;
	}
	return (0);
}
