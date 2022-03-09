/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsenol <bsenol@student.42kocali.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:49:10 by bsenol            #+#    #+#             */
/*   Updated: 2022/03/06 17:31:48 by bsenol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_strchecker(va_list arg, int g);
int	ft_bas_sayi(unsigned int c);
int	ft_uitoa(unsigned int a);
int	ft_array_print(char *str);
int	ft_putchar_v2(char g);
int	hex_print(unsigned int n, char c);
int	ptr_printer(unsigned long n);
int	ptr_print(unsigned long n);

#endif
