/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:39:39 by brattles          #+#    #+#             */
/*   Updated: 2020/11/25 23:21:57 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(strjoin = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	while (i < s1_len)
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[s1_len + s2_len] = '\0';
	return (strjoin);
}
