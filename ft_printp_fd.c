/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:36:35 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:40:57 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printp_fd(void *p, int fd)
{
	size_t	i;

	i = 0;
	if (p == 0)
		return (ft_prints_fd("(nil)", fd));
	i += ft_prints_fd("0x", fd);
	i += ft_printhex_fd((unsigned long)p, 'x', fd);
	return (i);
}
