/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 02:40:08 by hmechich          #+#    #+#             */
/*   Updated: 2021/11/22 22:16:04 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt_string1;
	unsigned char	*pt_string2;

	pt_string1 = (unsigned char *)s1;
	pt_string2 = (unsigned char *)s2;
	i = 0;
	while (i < n && pt_string1[i] == pt_string2[i])
		i++;
	if (i == n)
		return (0);
	return (pt_string1[i] - pt_string2[i]);
}
