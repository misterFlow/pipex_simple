/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:15:38 by hmechich          #+#    #+#             */
/*   Updated: 2021/12/19 15:55:26 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int *base_len)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar('-', base_len);
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		ft_putnbr(number / 10, base_len);
		number %= 10;
	}
	ft_putchar(number + '0', base_len);
}
