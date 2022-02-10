/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:43:58 by hmechich          #+#    #+#             */
/*   Updated: 2022/02/11 00:26:19 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils/libft.h"

void	print_str(va_list arg, int *arg_len)
{
	char	*str;

	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(str, arg_len);
}
