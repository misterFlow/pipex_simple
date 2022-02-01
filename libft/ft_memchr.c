/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:43:21 by hmechich          #+#    #+#             */
/*   Updated: 2021/11/20 17:54:17 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;
	void			*matching_byte;

	i = 0;
	string = (unsigned char *)s;
	matching_byte = NULL;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
		{
			matching_byte = &string[i];
			break ;
		}
		i++;
	}
	return (matching_byte);
}
