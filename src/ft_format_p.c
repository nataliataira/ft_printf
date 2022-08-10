/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:21:44 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/10 21:32:44 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_p(char *text, va_list args, int counter)
{
	unsigned long	adress;
	char			*s;

	if (*text == 'p')
	{
		adress = va_arg(args, unsigned long);
		if (!adress)
		{
			s = "(nil)";
			ft_putstr(s);
			counter += ft_strlen(s);
		}
		else
		{
			ft_putchar('0');
			ft_putchar('x');
			ft_putbase(p, HEXA_LOWER);
			counter += ft_countdigits(p, 16) + 2;
		}
	}
	return (counter);
}
