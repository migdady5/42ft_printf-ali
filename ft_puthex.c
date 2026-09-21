/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:15:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/21 13:00:29 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
	char	*base;
	char	buf[9];
	int		written;
	int		i;

	if (specifier == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 8;
	if (n == 0)
		return (write(1, "0", 1));
	buf[i] = '\0';
	while (n != 0)
	{
		buf[--i] = base[n % 16];
		n /= 16;
	}
	written = write(1, &buf[i], 8 - i);
	return (written);
}
