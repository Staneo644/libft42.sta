/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:12:31 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 18:35:11 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_element, size_t size)
{
	void	*a;
	size_t	i;

	i = 0;
	a = malloc(num_element * size);
	if (!a)
		return (NULL);
	ft_bzero(a, num_element * size);
	return (a);
}
