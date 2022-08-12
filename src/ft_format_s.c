/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:33:20 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/12 20:22:26 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_s(const char *text, va_list args, int counter)
{
	char	*s;

	if (*text == 's')
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(null)";
		write(1, s, ft_strlen(s));
		counter += ft_strlen(s);
	}
	return (counter);
}
