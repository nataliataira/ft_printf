/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:32:30 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/08/10 21:51:16 by ngomes-t         ###   ########.fr       */
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

int		ft_flags(char *text, va_list args, int index);
int		ft_format_c(char *text, va_list args, int index);
int		ft_format_s(char *text, va_arg args, int index);
int		ft_format_udi(char *text, va_list args, int index);
int		ft_format_xp(char *text, va_list args, int index);
void	ft_strlen(char *s);
int		ft_count_digits(int number);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnum_base(unsigned long int number, char *base);
int		ft_printf(const char *text, ...);

#endif