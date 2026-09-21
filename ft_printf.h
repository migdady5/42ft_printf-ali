/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:36:18 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/21 13:16:08 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...); // Main printf func
int	ft_putchar(char c); //character
int	ft_putstr(char *str); //string
int	ft_putnbr(int n); // integer
int	ft_putunsigned(unsigned int n); // unsigned integer
int	ft_puthex(unsigned int n, char specifier); // hexadecimal
int	ft_putpointer(void *ptr);
// pointer

#endif
