/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 01:31:14 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/12 20:17:51 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// this function directs the 'flag' to their respective printers
int	ft_flags(const char *text, va_list args, int counter)
{
	if (*text == 'c' || *text == '%')
		counter = ft_format_c(text, args, counter);
	else if (*text == 's')
		counter = ft_format_s(text, args, counter);
	else if (*text == 'd' || *text == 'i')
		counter = ft_format_id(text, args, counter);
	else if (*text == 'x' || *text == 'X' || *text == 'u')
		counter = ft_format_xu(text, args, counter);
	else if (*text == 'p')
		counter = ft_format_p(text, args, counter);
	else
		counter = 0;
	return (counter);
}
