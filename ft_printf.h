/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:54:06 by babkar            #+#    #+#             */
/*   Updated: 2021/12/07 14:22:38 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putadr(unsigned long ptr);
int		ft_putchar(int c);
int		ft_puthex(unsigned int num, const char format);
int		ft_putint(int n);
int		ft_putstr(char *s);
int		ft_putuint(unsigned int n);
int		ft_strlen(char *s);
#endif
