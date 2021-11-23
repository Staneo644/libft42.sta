/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:37:57 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/15 11:20:18 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *tab, char (*f)(unsigned int, char))
{
	int		i;
	int		length;
	char	*newtab;

	length = 0;
	if (!tab)
		return (NULL);
	while (tab[length])
	{
		length++;
	}
	newtab = malloc (sizeof(char) * (length + 1));
	if (!newtab)
		return (NULL);
	i = 0;
	while (i < length)
	{
		newtab[i] = (*f)(i, tab[i]);
		i++;
	}
	newtab[length] = 0;
	return (newtab);
}
