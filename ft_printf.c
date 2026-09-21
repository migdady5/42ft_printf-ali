/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:30:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/21 13:05:40 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checked(va_list *inputs, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar((char)va_arg(*inputs, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(*inputs, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(*inputs, int)));
	else if (specifier == 'u')
		return (ft_putunsigned(va_arg(*inputs, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(va_arg(*inputs, unsigned int), specifier));
	else if (specifier == 'p')
		return (ft_putpointer(va_arg(*inputs, void *)));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *f, ...)
{
	va_list	inputs;
	int		i;
	int		c;

	va_start(inputs, f);
	i = 0;
	c = 0;
	while (f && f[i])
	{
		if (f[i] == '%')
		{
			i++;
			c += checked(&inputs, f[i]);
		}
		else
			c += ft_putchar(f[i]);
		i++;
	}
	va_end(inputs);
	return (c);
}
