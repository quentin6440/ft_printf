/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:44:51 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:40:10 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_arg(char c, va_list arg, int fd)
{
	if (c == '%')
		return (ft_printc_fd('%', fd));
	if (c == 'c')
		return (ft_printc_fd(va_arg(arg, int), fd));
	if (c == 's')
		return (ft_prints_fd(va_arg(arg, char *), fd));
	if (c == 'd' || c == 'i')
		return (ft_printi_fd(va_arg(arg, int), fd));
	if (c == 'u')
		return (ft_printu_fd(va_arg(arg, unsigned int), fd));
	if (c == 'x' || c == 'X')
		return (ft_printhex_fd(va_arg(arg, unsigned int), c, fd));
	if (c == 'p')
		return (ft_printp_fd(va_arg(arg, void *), fd));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		fd;
	int		ct;
	va_list	arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	fd = 1;
	ct = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ct += ft_handle_arg(*format, arg, fd);
		}
		else
		{
			ft_printc_fd(*format, fd);
			ct++;
		}
		format++;
	}
	va_end(arg);
	return (ct);
}
