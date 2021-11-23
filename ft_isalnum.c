/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:12:43 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/10 10:29:17 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character <= 90 && character >= 65)
		|| (character >= 97 && character <= 122)
		|| (character >= 48 && character <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
