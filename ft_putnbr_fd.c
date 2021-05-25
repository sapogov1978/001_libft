/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 10:55:51 by brattles          #+#    #+#             */
/*   Updated: 2020/11/24 20:53:28 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	long int	new_n;

	new_n = n;
	if (new_n < 0)
	{
		ft_putchar_fd('-', fd);
		new_n = -new_n;
	}
	if (new_n > 9)
		ft_putnbr_fd(new_n / 10, fd);
	ft_putchar_fd((char)(new_n % 10 + '0'), fd);
}
