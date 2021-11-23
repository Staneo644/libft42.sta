/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:00:19 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:23:49 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_unsistrlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*rend;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (i < len)
		len = i;
	if (ft_unsistrlen(s) <= start || s == NULL)
	{
		rend = ft_strdup("\0");
		return (rend);
	}
	rend = malloc(sizeof(char) * (len + 1));
	if (!rend)
		return (NULL);
	i = -1;
	while (++i < len)
		rend[i] = s[start + i];
	rend[i] = '\0';
	return (rend);
}
