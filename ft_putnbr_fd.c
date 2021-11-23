/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:23:40 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/14 23:27:17 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nb(long int nb, int fd)
{
	if (nb > 9)
	{
		ft_print_nb(nb / 10, fd);
		ft_print_nb(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	r;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		r = nb * -1;
	}
	else
	{
		r = nb;
	}
	ft_print_nb(r, fd);
}
