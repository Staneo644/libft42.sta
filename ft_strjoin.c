/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:31:02 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:26:54 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbfuse(char const *s1, char const *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j);
}

static char	*boucle(int	*a, char const *s, char *rend)
{
	while (*s)
	{
		*(char *)rend = *(char *)s;
		*a = *a + 1;
		rend ++;
		s++;
	}
	return (rend);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rend;
	int		a;

	a = 0;
	if (!s1 || !s2)
		return (NULL);
	rend = malloc(sizeof(char) * (nbfuse(s1, s2) + 1));
	if (!rend)
		return (NULL);
	rend = boucle(&a, s1, rend);
	rend = boucle(&a, s2, rend);
	*(char *)rend = 0;
	a++;
	while (--a > 0)
		rend--;
	return (rend);
}
