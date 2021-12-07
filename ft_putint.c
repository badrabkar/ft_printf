/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:26:42 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 13:26:48 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putint(int n)
{
	int	lenprint;

	lenprint = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= (-1);
		lenprint += ft_putchar('-');
	}
	if (n < 10)
		lenprint += ft_putchar(n + 48);
	if (n >= 10)
	{
		lenprint += ft_putint(n / 10);
		lenprint += ft_putint(n % 10);
	}
	return (lenprint);
}
