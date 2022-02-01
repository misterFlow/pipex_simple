/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmechich <hmechich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:37:31 by hmechich          #+#    #+#             */
/*   Updated: 2021/11/29 10:01:07 by hmechich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurence;

	if (s[0] == 0 && c == 0)
		return ((char *)&s[0]);
	else if (s[0] == 0)
		return (NULL);
	i = 0;
	last_occurence = NULL;
	if (s != NULL)
	{
		if (s[i] == 0)
			return (last_occurence = (char *)&s[i]);
		while (s[i])
		{
			if (s[i] == (char)c)
				last_occurence = (char *)&s[i];
			i++;
		}
		if (c == 0)
			return (last_occurence = (char *)&s[i]);
	}
	return (last_occurence);
}
