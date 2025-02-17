/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:16:31 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:41:50 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printu_fd(unsigned int n, int fd)
{
	size_t	i;

	i = 0;
	if (n > 9)
		i += ft_printu_fd(n / 10, fd);
	i += ft_printc_fd(n % 10 + 48, fd);
	return (i);
}
