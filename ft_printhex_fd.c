/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:13:21 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:41:39 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printhex_fd(unsigned long n, char c, int fd)
{
	size_t	i;
	size_t	nh;

	nh = 0;
	i = 0;
	if (n > 15)
		i += ft_printhex_fd(n / 16, c, fd);
	nh = n % 16;
	if (nh > 9 && c == 'x')
		i += ft_printc_fd(nh + 87, fd);
	else if (nh > 9 && c == 'X')
		i += ft_printc_fd(nh + 55, fd);
	else
		i += ft_printc_fd(nh + 48, fd);
	return (i);
}
