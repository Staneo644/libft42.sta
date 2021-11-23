/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajossera <ajossera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:24:12 by ajossera          #+#    #+#             */
/*   Updated: 2021/11/15 11:05:47 by ajossera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_firstword(int *i, char const *str, char charset)
{
	int		j;
	char	*word;

	j = 0;
	while (str[*i + j] && str[*i + j] != charset)
	{
		j++;
	}
	word = (char *)malloc(sizeof(char) * (j + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (str[*i + j] && str[*i + j] != charset)
	{
		word[j] = str[*i + j];
		j++;
	}
	word[j] = '\0';
	*i = *i + j;
	return (word);
}

static int	ft_wc(char const *str, char charset)
{
	int	i;
	int	count;
	int	_bool;

	i = 0;
	count = 0;
	_bool = 0;
	while (str[i])
	{
		if (str[i] != charset && !_bool)
		{
			count++;
			_bool = 1;
		}
		else if (str[i] == charset && _bool)
			_bool = 0;
		i++;
	}
	return (count);
}

static void	free_all(char **str, int nb)
{
	while (nb > 0)
	{
		free(str[nb - 1]);
		nb--;
	}
}

static char	**ft_second_split(int i, char const *str, char charset,
	char **bigarray)
{
	int		count;

	count = 0;
	while (str[i])
	{
		if (str[i] == charset)
			i++;
		else
		{
			bigarray[count] = ft_firstword(&i, str, charset);
			if (!bigarray[count])
			{
				free_all(bigarray, count);
				return (NULL);
			}
			count++;
		}
	}
	return (bigarray);
}

char	**ft_split(char const *str, char charset)
{
	int		i;
	int		_wc;
	char	**bigarray;

	if (str == NULL)
		return (NULL);
	i = 0;
	_wc = ft_wc(str, charset);
	bigarray = (char **)malloc(sizeof(char *) * (_wc + 1));
	if (!bigarray)
		return (NULL);
	bigarray[_wc] = 0;
	bigarray = ft_second_split(i, str, charset, bigarray);
	return (bigarray);
}
