/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:20:24 by brattles          #+#    #+#             */
/*   Updated: 2020/11/25 23:36:02 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			i;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = n;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (i--)
			*(c_dest++) = *(c_src++);
		return (dest);
	}
	else
	{
		c_dest += n - 1;
		c_src += n - 1;
		while (i--)
			*(c_dest--) = *(c_src--);
		return (dest);
	}
}
