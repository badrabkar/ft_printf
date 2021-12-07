/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:25:30 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 13:55:56 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_int_to_hex(unsigned int num, const char format)
{
	int	lenprint;

	lenprint = 0;
	if (num >= 16)
	{
		lenprint += ft_int_to_hex(num / 16, format);
		lenprint += ft_int_to_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			lenprint += ft_putchar(num + '0');
		else
		{
			if (format == 'x')
				lenprint += ft_putchar(num - 10 + 'a');
			if (format == 'X')
				lenprint += ft_putchar(num - 10 + 'A');
		}
	}
	return (lenprint);
}

int	ft_puthex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		return (ft_int_to_hex(num, format));
}
