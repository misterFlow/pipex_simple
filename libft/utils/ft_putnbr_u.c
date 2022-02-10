/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:15:38 by hmechich          #+#    #+#             */
/*   Updated: 2021/12/19 15:50:22 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u(unsigned int n, int *base_len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, base_len);
		n %= 10;
	}
	ft_putchar(n + '0', base_len);
}
