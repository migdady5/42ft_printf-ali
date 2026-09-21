/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:20:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/21 13:18:45 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	puthex_ptr_rec(unsigned long long n)
{
	int		count;
	char	*base;
	char	c;

	count = 0;
	if (n >= 16)
		count += puthex_ptr_rec(n / 16);
	{
		base = "0123456789abcdef";
		c = base[n % 16];
		count += write(1, &c, 1);
	}
	return (count);
}

int	ft_putpointer(void *ptr)
{
	unsigned long long	n;
	int					count;

	count = 0;
	n = (unsigned long long)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += puthex_ptr_rec(n);
	return (count);
}
