/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:39:19 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:24:51 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*slalloc(int nb)
{
	int		i;
	char	*rend;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	rend = malloc(sizeof(char) * (i + 1));
	if (!rend)
		return (NULL);
	return (rend);
}

static int	final_terme(int nb)
{
	int		i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa( int nb)
{
	char			*rend;
	int				i;

	if (nb == 0)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup ("-2147483648"));
	rend = slalloc(nb);
	if (!rend)
		return (NULL);
	i = final_terme(nb);
	if (nb < 0)
	{
		rend[0] = '-';
		nb = -nb;
	}
	rend[i] = 0;
	i--;
	while (nb > 0)
	{
		rend[i] = (nb % 10) + '0';
		i --;
		nb = nb / 10;
	}
	return (rend);
}
