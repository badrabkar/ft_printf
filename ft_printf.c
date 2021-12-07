/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:20:29 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 14:22:49 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print(const char format, va_list ap)
{
	int		lenprint;
	char	*c;

	c = "\0";
	lenprint = 0;
	if (format == '\0' && ap == NULL)
	{
		write(1, c, 1);
		return (0);
	}
	else if (format == 'd' || format == 'i')
		lenprint += ft_putint(va_arg(ap, int));
	else if (format == 'c')
		lenprint += ft_putchar(va_arg(ap, int));
	else if (format == 'X' || format == 'x')
		lenprint += ft_puthex(va_arg(ap, unsigned int), format);
	else if (format == 'u')
		lenprint += ft_putuint(va_arg(ap, unsigned int));
	else if (format == 'p')
		lenprint += ft_putadr(va_arg(ap, unsigned long));
	else if (format == 's')
		lenprint += ft_putstr(va_arg(ap, char *));
	else if (format == '%')
		lenprint += ft_putchar('%');
	return (lenprint);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		j;
	int		lenprint;

	i = 0;
	lenprint = 0;
	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			lenprint += ft_print(format[i + 1], ap);
			i++;
		}
		else
			lenprint += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (lenprint);
}
