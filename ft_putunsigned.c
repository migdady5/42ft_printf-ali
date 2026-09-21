/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:10:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/21 13:12:40 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	putunsigned_rec(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += putunsigned_rec(n / 10);
	{
		c = '0' + (n % 10);
		count += write(1, &c, 1);
	}
	return (count);
}

int	ft_putunsigned(unsigned int n)
{
	return (putunsigned_rec(n));
}
