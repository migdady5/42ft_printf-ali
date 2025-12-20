/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:15:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/20 22:15:00 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int puthex_rec(unsigned int n, const char *base)
{
    int count = 0;
    if (n >= 16)
        count += puthex_rec(n / 16, base);
    {
        char c = base[n % 16];
        count += write(1, &c, 1);
    }
    return count;
}

int ft_puthex(unsigned int n, char specifier)
{
    const char *base = (specifier == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
    return puthex_rec(n, base);
}
