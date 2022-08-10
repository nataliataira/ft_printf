/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_xu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:45:25 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/10 21:44:55 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_xp(char *text, va_list args, int counter)
{
	unsigned int	digit;

	if (*text == 'x')
	{
		digit = va_arg(args, unsigned int);
		ft_putnum_base(digit, HEXLOWER);
		counter += ft_count_digits(digit, 16);
	}
	else if (*text == 'X')
	{
		digit = va_arg(args, unsigned int);
		ft_putnum_base(digit, HEXUPPER);
		counter += ft_count_digits(digit, 16);
	}
	else if (*text == 'u')
	{
		digit = va_arg(args, unsigned int);
		ft_putnum_base(digit, DECIMAL);
		counter += ft_count_digits(num, 10);
	}
	return (counter);
}
