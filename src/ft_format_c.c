/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:33:20 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/10 20:44:50 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_c(char *text, va_list args, int counter)
{
	char	c;

	if (*text == '%')
	{
		ft_putchar('%');
		counter++;
	}
	else if (text == 'c')
	{
		c = va_arg(args, int);
		ft_putchar(c);
		counter++;
	}
	return (counter);
}
