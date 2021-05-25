/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:18:35 by brattles          #+#    #+#             */
/*   Updated: 2020/11/22 21:29:49 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size > INT_MAX)
		return (NULL);
	ptr = (void*)malloc(nmemb * size);
	if (ptr)
	{
		ft_bzero(ptr, nmemb * size);
		return (ptr);
	}
	return (NULL);
}
