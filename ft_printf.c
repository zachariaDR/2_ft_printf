/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:30:04 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/11 02:55:21 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_type(va_list args, const char format)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(var_arg(args, int), 1));
	else if (format == 'u')
		//function for u
	else if (format == 'c')
		return (ft_putchar(var_arg(args, char), 1));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *), 1));
	else if (format == '%')
		return (ft_putchar(format, 1));
	else if (format == 'x')
		//putnbr_base_Min
	else if (format == 'X')
		//putnbr_base_Max
	else if (format == 'p')
		//function for adresses
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%'", format[i + 1]))
		{
			count += check_type(args, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
