/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:12:36 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:24:20 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iskdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

static int	check_isspace(const	char *theString)
{
	int		i;

	i = 0;
	while (theString[i])
	{
		if ((theString[i] < 9 || theString[i] > 13) && theString[i] != ' ')
			return (i);
		i++;
	}
	return (i);
}

static int	first_character(const char *theString, int *i)
{
	int	signe;

	signe = 1;
	if (theString[*i] == '-')
	{
		*i += 1;
		signe = -signe;
	}
	else if (theString[*i] == '+')
	{
		*i += 1;
	}
	return (signe);
}

int	ft_atoi(const char	*theString)
{
	int					i;
	unsigned int		rep;
	int					signe;

	i = check_isspace(theString);
	signe = first_character(theString, &i);
	rep = 0;
	while (theString[i])
	{
		if (iskdigit(theString[i]) == 0)
			return (signe * rep);
		else
		{
			if ((rep < 2147483648 && signe == -1)
				|| (rep < 2147483647 && signe == 1))
			{
				rep *= 10;
				rep += theString[i] - '0';
			}
			else
				return (0 - (signe == 1));
		}
		i ++;
	}
	return (signe * rep);
}
