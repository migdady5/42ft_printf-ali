/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:05:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/20 22:05:00 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int putnbr_rec(long n)
{
    int count = 0;

    if (n >= 10)
        count += putnbr_rec(n / 10);
    {
        char c = '0' + (n % 10);
        count += write(1, &c, 1);
    }
    return count;
}

int ft_putnbr(int n)
{
    long nl = n;
    int count = 0;

    if (nl < 0)
    {
        count += write(1, "-", 1);
        nl = -nl;
    }
    count += putnbr_rec(nl);
    return count;
}
