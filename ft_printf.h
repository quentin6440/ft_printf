/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:10:54 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 01:11:37 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

size_t	ft_printc_fd(char c, int fd);
size_t	ft_prints_fd(char *p, int fd);
size_t	ft_printi_fd(int n, int fd);
size_t	ft_printu_fd(unsigned int n, int fd);
size_t	ft_print_hex_fd(unsigned long n, char c, int fd);
int		ft_printf(const char *format, ...);

#endif
