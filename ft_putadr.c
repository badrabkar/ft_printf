/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:22:01 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 14:22:25 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_ptr(unsigned long n)
{
	int	lenprint;

	lenprint = 0;
	if (n >= 16)
	{
		lenprint += ft_put_ptr(n / 16);
		lenprint += ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			lenprint += ft_putchar(n + '0');
		else
			lenprint += ft_putchar(n - 10 + 'a');
	}
	return (lenprint);
}

int	ft_putadr(unsigned long ptr)
{
	int	lenprint;

	lenprint = 0;
	lenprint += ft_putstr("0x");
	if (ptr == 0)
		lenprint += ft_putchar('0');
	else
	{
		lenprint += ft_put_ptr(ptr);
	}
	return (lenprint);
}
