/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:53:20 by brattles          #+#    #+#             */
/*   Updated: 2020/11/22 23:58:12 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		s_len;

	s_len = ft_strlen(s) + 1;
	if ((long)(s_len) >= (long)INT_MAX)
		return (NULL);
	if (!(new_str = (char *)malloc(s_len * sizeof(char))))
		return (NULL);
	ft_strlcpy(new_str, s, s_len);
	return (new_str);
}
