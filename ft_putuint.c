/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:28:19 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 13:28:26 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	lenprint;

	lenprint = 0;
	if (n < 10)
		lenprint += ft_putchar(n + 48);
	else
	{
		lenprint += ft_putuint(n / 10);
		lenprint += ft_putuint(n % 10);
	}
	return (lenprint);
}
