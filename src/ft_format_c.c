/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:33:20 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/12 20:25:29 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_c(const char *text, va_list args, int counter)
{
	char	c;

	if (*text == '%')
	{
		write(1, "%", 1);
		counter++;
	}
	else if (*text == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
		counter++;
	}
	return (counter);
}
