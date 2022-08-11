/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:32:30 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/11 21:10:18 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXUPPER "0123456789ABCDEF"
# define HEXLOWER "0123456789abcdef"
# define DECIMAL "0123456789"

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_flags(const char *text, va_list args, int counter);
int		ft_format_c(const char *text, va_list args, int counter);
int		ft_format_s(const char *text, va_list args, int counter);
int		ft_format_id(const char *text, va_list args, int counter);
int		ft_format_p(const char *text, va_list args, int counter);
int		ft_format_xu(const char *text, va_list args, int counter);
int		ft_strlen(const char *s);
int		ft_count_digits(unsigned long number, int base);
void	ft_putchar(const char c);
void	ft_putstr(const char *s);
void	ft_putnum_base(unsigned long number, char *base);
int		ft_printf(const char *text, ...);

#endif