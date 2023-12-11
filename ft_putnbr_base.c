/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:06:39 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/11 20:56:22 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char xX)
{
	unsigned int	base_len;
	char			*base;
	int				count;

	base_len = 16;
	if (xX == 'x')
		base = "0123456789abcdef";
	if (xX == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= base_len)
		count += ft_putnbr_base(nbr / base_len, xX);
		count += ft_putnbr_base(nbr % base_len, xX);
	else
		count += ft_putchar_fd(base[nbr], 1);
	return (count);
}
