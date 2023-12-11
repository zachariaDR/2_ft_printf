/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:35:34 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/10 17:03:23 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

# define LHEX "0123456789abcef"
# define UHEX "0123456789ABCDEF"

int	ft_putnbr_base(size_t nbr, char *base);
int	ft_printf(const char *s, ...);

#endif
