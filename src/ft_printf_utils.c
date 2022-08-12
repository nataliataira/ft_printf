/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:33:20 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/12 20:28:13 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// this function prints a char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// this function prints numbers from different bases
void	ft_putnum_base(unsigned long number, char *base)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (number / len_base > 0)
		ft_putnum_base(number / len_base, base);
	ft_putchar(base[number % len_base]);
}

// this function returns the length of a string
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// this fuction returns the number of digits
int	ft_count_digits(unsigned long number, int base)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	while (number >= 1)
	{
		number /= base;
		count++;
	}
	return (count);
}
