/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 02:52:42 by brattles          #+#    #+#             */
/*   Updated: 2020/11/29 11:33:29 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_putmmrback(char **split_table)
{
	int		i;

	i = 0;
	while (split_table[i] != NULL)
	{
		free(split_table[i]);
		i++;
	}
	free(split_table);
	return (NULL);
}

static int	ft_line_len(char const *s, int start, char c)
{
	int		line_len;

	line_len = 0;
	while (s[start] && s[start] != c)
	{
		line_len++;
		start++;
	}
	return (line_len);
}

static int	ft_lines_qty(char const *s, char c)
{
	int		lines_qty;
	int		i;
	int		counted_fl;

	counted_fl = 1;
	i = 0;
	lines_qty = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (counted_fl == 0)
				lines_qty++;
			counted_fl = 1;
		}
		else
			counted_fl = 0;
		i++;
	}
	if (counted_fl == 0)
		lines_qty++;
	return (lines_qty);
}

char		**ft_split(char const *s, char c)
{
	char	**split_table;
	int		lines_qty;
	int		i;
	int		j;

	i = 0;
	j = 0;
	lines_qty = ft_lines_qty(s, c);
	if (!(split_table = ft_calloc(lines_qty + 1, (sizeof(char *)))))
		return (NULL);
	while (lines_qty--)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!(split_table[j] = ft_substr(s, i, ft_line_len(s, i, c))))
			return (ft_putmmrback(split_table));
		j++;
		i = i + ft_line_len(s, i, c);
	}
	split_table[j] = NULL;
	return (split_table);
}
