/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:55:36 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 00:55:40 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printc_fd(char c, int fd)
{
	if (fd <= 0)
		return (0);
	write(fd, &c, 1);
}

size_t	ft_prints_fd(char *p, int fd)
{
	size_t	i;

	i = 0;
	if (!p)
		return (ft_prints_fd("(null)", fd));
	while (p[i])
	{
		ft_printc_fd(p[i], fd);
		i++;
	}
	return (i);
}

size_t	ft_printi_fd(int n, int fd)
{
	size_t		i;

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

size_t	ft_printu_fd(unsigned int n, int fd)
{
	size_t	i;

	i = 0;
	if (n > 9)
		i += ft_printu_fd(n / 10, fd);
	i += ft_printc_fd(n % 10 + 48, fd);
	return (i);
}

size_t	ft_print_hex_fd(unsigned long n, char c, int fd)
{
	size_t	i;
	size_t	nh;

	nh = 0;
	i = 0;
	if (n > 15)
		i += ft_print_hex_fd(n / 16, c, fd);
	nh = n % 16;
	if (nh > 9 && c == 'x')
		i += ft_printc_fd(nh + 87, fd);
	else if (nh > 9 && c == 'X')
		i += ft_printc_fd(nh + 55, fd);
	else
		i += ft_printc_fd(nh + 48, fd);
	return (i);
}
