/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 22:00:00 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/20 22:00:00 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_putstr(char *str)
{
    int len = 0;

    if (!str)
        return ft_putstr("(null)");
    while (str[len])
        len++;
    write(1, str, len);
    return len;
}
