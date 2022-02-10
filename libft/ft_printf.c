/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 08:30:22 by hmechich          #+#    #+#             */
/*   Updated: 2021/12/19 21:25:29 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check_format(char const *str, va_list arg, int index, int *arg_len)
{
	char	c;

	if (str[index] == 'c')
	{
		c = va_arg(arg, int);
		*arg_len += write(1, &c, 1);
	}
	if (str[index] == '%')
		*arg_len += write(1, "%", 1);
	if (str[index] == 'd' || str[index] == 'i')
		print_int(arg, arg_len);
	if (str[index] == 'u')
		print_uint(arg, arg_len);
	if (str[index] == 'x' || str[index] == 'X')
		print_hexa(arg, arg_len, str[index]);
	if (str[index] == 'p')
		print_address_hexa(arg, arg_len);
	if (str[index] == 's')
		print_str(arg, arg_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		*arg_len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	arg_len = &len;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			check_format(format, args, i, arg_len);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
