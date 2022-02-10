/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:48:00 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 00:26:12 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils/libft.h"

void	print_char(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

void	print_int(va_list arg, int *arg_len)
{
	int		num;

	num = va_arg(arg, int);
	ft_putnbr(num, arg_len);
}

void	print_uint(va_list arg, int *arg_len)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putnbr_u(num, arg_len);
}

void	print_hexa(va_list arg, int *arg_len, char c)
{
	unsigned long	num;

	num = va_arg(arg, unsigned long);
	if (c == 'X')
		ft_putnbr_base_u(num, "0123456789ABCDEF", arg_len);
	else
		ft_putnbr_base_u(num, "0123456789abcdef", arg_len);
}

void	print_address_hexa(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if ((void *)address == NULL)
		ft_putstr(PTR_NULL, arg_len);
	else
	{
		ft_putstr("0x", arg_len);
		ft_putnbr_base_ul(address, "0123456789abcdef", arg_len);
	}
}
