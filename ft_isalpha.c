/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:25:55 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/10 10:25:57 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if ((character <= 90 && character >= 65)
		|| (character >= 97 && character <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
