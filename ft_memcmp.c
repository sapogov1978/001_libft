/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:20:23 by brattles          #+#    #+#             */
/*   Updated: 2020/11/22 21:45:12 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t			i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = n;
	while (i-- > 0)
	{
		if (*c_s1 == *c_s2)
		{
			c_s1++;
			c_s2++;
		}
		else
			return (*c_s1 - *c_s2);
	}
	return (0);
}
