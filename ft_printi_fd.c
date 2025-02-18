/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printi_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:21:57 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:41:28 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printi_fd(int n, int fd)
{
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		i = 11;
		write(fd, "-2147483648", i);
		return (i);
	}
	if (n < 0)
	{
		i += ft_printc_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		i += ft_printi_fd(n / 10, fd);
	}
	i += ft_printc_fd(n % 10 + 48, fd);
	return (i);
}
