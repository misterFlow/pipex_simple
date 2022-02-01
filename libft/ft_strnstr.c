/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:46:47 by hmechich          #+#    #+#             */
/*   Updated: 2021/11/30 13:02:47 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!*big && !*little) || !*little)
		return ((char *)big);
	if (!*big)
		return (0);
	j = 0;
	while (j < len && len != 0 && *big)
	{
		if (*big == *little)
		{
			i = 1;
			while (little[i] == big[i] && little[i] && j + i < len)
				i++;
			if (!little[i])
				return ((char *)big);
		}
		big++;
		j++;
	}
	return (NULL);
}
