/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:21:44 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/11 23:57:44 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_p(const char *text, va_list args, int counter)
{
	unsigned long	adress;
	char			*s;

	if (*text == 'p')
	{
		adress = va_arg(args, unsigned long);
		if (!adress)
		{
			s = "(nil)";
			write(1, s, ft_strlen(s));
			counter += ft_strlen(s);
		}
		else
		{
			write(1, "0x", 2);
			ft_putnum_base(adress, HEXLOWER);
			counter += ft_count_digits(adress, 16) + 2;
		}
	}
	return (counter);
}
