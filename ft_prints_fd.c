/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcyril-a <qcyril-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:34:01 by qcyril-a          #+#    #+#             */
/*   Updated: 2025/02/17 15:41:15 by qcyril-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints_fd(char *p, int fd)
{
	int	i;

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
