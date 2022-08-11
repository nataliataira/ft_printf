/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:15:08 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/11 18:30:41 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_format_id(const char *text, va_list args, int counter)
{
	long int		num;

	if (*text == 'i' || *text == 'd')
	{
		num = va_arg(args, int);
		if (num < 0)
		{
			ft_putchar('-');
			counter++;
			num *= -1;
		}
		ft_putnum_base(num, DECIMAL);
		counter += ft_count_digits(num, 10);
	}
	return (counter);
}
