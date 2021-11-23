/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:30:06 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:23:39 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(char a, char const *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == a)
			return (1);
		i ++;
	}
	return (0);
}

static int	smalloc(char const *s1, char const *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_in(s1[i], s2))
	{
		i++;
	}
	while (s1[j])
	{
		j++;
	}
	j --;
	while (ft_in(s1[j], s2) && j >= i)
	{
		j--;
	}
	if (j < i)
		return (0);
	if (j == i)
		return (1);
	return ((j - i) + 1);
}

static char	*when_all_is_set(void)
{
	char	*rend;

	rend = malloc(sizeof(char) * 1);
	rend[0] = '\0';
	return (rend);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rend;
	int		i;
	int		a;
	int		size;

	a = -1;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	size = smalloc(s1, set);
	if (!size)
		return (when_all_is_set());
	rend = malloc(sizeof(char) * (size + 1));
	if (!rend)
		return (NULL);
	while (ft_in(s1[i], set))
		i++;
	i--;
	while (++a < size)
		rend[a] = s1[++i];
	rend[a] = '\0';
	return (rend);
}
