/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:58:50 by sniemela          #+#    #+#             */
/*   Updated: 2024/05/29 14:59:49 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXADEC_UPPER "0123456789ABCDEF"
# define HEXADEC_LOWER "0123456789abcdef"

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *s, ...);
int	ft_putunsigned(unsigned int n, int *count);
int	ft_puthexadec(unsigned long n, int specifier);
int	ft_putchar(int c);
int	ft_putnbr(int n, int *count);
int	ft_putstr(char *str);
int	ft_putptr(void *p);

#endif
