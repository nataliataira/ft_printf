/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:30:58 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/11 23:51:53 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *text, ...)
{
	int		counter;
	va_list	args;

	counter = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text != '%')
		{
			write(1, text++, 1);
			counter++;
		}
		else
		{
			text++;
			counter = ft_flags(text, args, counter);
			text++;
		}
	}
	va_end(args);
	return (counter);
}
